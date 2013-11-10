
Type infer_type(Expr expr, [Var -> Type] (env)):
  Symbol                = singleton{expr},
  int(n)                = int_range{min: n, size: 1},
  :empty_set            = :empty_set_type,
  //set(es+)              = ???????
  term()                = term_type{root: expr.root, type: infer_type(expr.subobjs, env)},
  
  //seq_lit()
  
  Var                   = env[expr],

  //fn_call(name: FnSymbol, params: [Expr+]),
  
  if_expr()             = union_superset(infer_type(expr.body, env), infer_type(expr.else, env)), // assert is_subset(infer_type(expr.cond, env), bool)
  eq()                  = bool_type,
  membership()          = bool_type,
  
  accessor()            = get_field_type(infer_type(expr.expr, env), expr.field), // assert has_field(infer_type(e, env), s)
  accessor_test()       = bool_type,
  accessor_all(e)       = infer_type(e, env).type, // assert infer_type(e, env) :: TermType

  ex_qual()             = bool_type;
  //set_comp(expr: Expr, source: [Clause+], sel_expr: Expr?),
  //seq_comp(expr: Expr, var: Var, idx_var: Var?, src_expr: Expr, sel_expr: Expr?),

  //try_expr(exprs: [Expr+], cases: [(ptrns: [Ptrn+], expr: Expr)+]),
  //do_expr([Statement+]),

  //select_expr(type: Type, src_expr: Expr),
  //replace_expr(expr: Expr, src_expr: Expr, ptrn: Ptrn),

  //where_expr(expr: Expr, fndefs: {(name: FnSymbol, vars: [<Var, nil>*], body: Expr)});





// Once I start returning error objects, this would be a
// good test for transparent error propagation
Bool is_type_correct(Expr expr, [Var -> Type] (env)):
  Symbol              = true,
  int(n)              = true,
  empty_set           = true,
  set(es+)            = not {? e <- es ; not is_type_correct(e, env)},
  term()              = is_type_correct(expr.subobjs, env),
  
  Var v               = has_key(env, v),

  //fn_call(name: FnSymbol, params: [Expr+]),
  
  if_expr()           = all({is_type_correct(e, env) : e <- {expr.cond, expr.body, expr.else}}) and
                        is_subset(infer_type(expr.cond, env), bool_type),
                                
  eq()                = is_type_correct(expr.left, env) and is_type_correct(expr.right, env), // BAD
  
  membership()        = is_type_correct(expr.obj, env),
  
  accessor()          = is_type_correct(expr.expr, env) and has_field(infer_type(expr.expr, env), expr.field),
  accessor_test()     = is_type_correct(expr, env), // and may_have_field(...) ???
  accessor_all(e)     = is_type_correct(e, env) and infer_type(e, env) :: TermType,

  ex_qual()           = is_type_correct(expr.source, {expr.sel_expr}, env),
  set_comp()          = is_type_correct(expr.source, {expr.expr, expr.sel_expr}, env),

  //seq_comp(expr: Expr, var: Var, idx_var: Var?, src_expr: Expr, sel_expr: Expr?),
  seq_comp()          = is_type_correct(expr.src_expr, env) and
                        is_seq_type(expr.src_expr, env)     and
                        do
                          new_env := merge([expr.var -> seq_el_type(expr.src_expr, env)], env);
                          if (expr.idx_var?)
                            new_env := merge([expr.idx_var -> high_ints{min: 0}], new_env);;
                                  
                          if (expr.sel_expr?)
                            return false if not is_type_correct(expr.sel_expr, new_env);
                            return false if not is_subset(infer_type(expr.sel_expr, new_env), bool_type);
                          ;
                                  
                          return is_type_correct(expr.expr, env);
                        end,

  //try_expr(exprs: [Expr+], cases: [(ptrns: [Ptrn+], expr: Expr)+]),
  try_expr()          = (for_each(expr.exprs) where p(e) = is_type_correct(e, env);) and // BAD BAD WEIRD
                        do
                          types := [infer_type(e, env) : e <- expr.exprs];
                                  
                          for (c : expr.cases)
                            for (p, i : c.ptrns)                          // BAD
                              return false if not might_match(p, types[i], env); // BAD
                            ;
                                  
                            delta_env := merge_envs(set([env_updates(p, types[i], env) : p, i <- c.ptrns]));
                            new_env   := merge_envs(env, delta_env);
                                    
                            return false if not is_type_correct(c.expr, new_env);
                          ;
                                  
                          return true;
                        ;,

  //do_expr([Statement+]),
  do_expr(ss)         = is_type_correct(ss, env),

  //select_expr(type: Type, src_expr: Expr)
  select_expr()       = is_type_correct(expr.src_expr, env),  //## I SHOULD ALSO CHECK THAT OBJECTS OF TYPE "Type"
                                                              //## CAN ACTUALLY BE PRESENT INSIDE THE EXPRESSION

  //replace_expr(expr: Expr, src_expr: Expr, ptrn: Ptrn),
  replace_expr()      = do
                          return false if not is_type_correct(expr.src_expr, env);
                          type := infer_type(expr.src_expr, env);
                          return false if not might_match(expr.ptrn, type, env);
                          new_env := merge_envs(env_updates(expr.ptrn, type, env), env);
                          return is_type_correct(expr.expr, new_env);
                        ;

  //where_expr(expr: Expr, fndefs: {(name: FnSymbol, vars: [<Var, nil>*], body: Expr)});
;


Bool is_type_correct([Clause+] clauses, Expr* exprs, [Var -> Type] env)
{
  c := and_merge(clauses);
  return false if not is_type_correct(c, env);
  new_env := merge(env, env_updates(c, env));
  return not {? e <- exprs ; not is_type_correct(e, new_env)};
}


Bool has_field(Type type, Symbol (field)):
  LeafType      = false,
  TermType      = has_field(type.type, field),
  UnionType     = not {? t <- type.* ; not has_field(t, field)},
  //##IdType        = ???
  SetType       = size({b : b <- type.* ; is_field_branch(b, field)})
;
  
is_field_branch(b, field) = b.card = :required       and 
                            b.type :: TermType       and
                            b.type.root = field      and
                            size(b.type.type.*) = 1  and
                            only_element(b.type.type.*).card = :required;
  
Clause and_merge([Clause+]):
  [c]     = c,
  [h | t] = and_clause{left: h, right: and_merge(t)};


Bool is_type_correct(Clause clause, [Var -> Type] (env)):
  LeafClause      = do
                      return false if not is_type_correct(clause.src, env);
                      src_type := infer_type(clause.src, env);
                      return false if not src_type :: SetType;
                      return might_match_element(clause.ptrn, src_type, env);
                    end,

  or_clause()     = is_type_correct(clause.left, env)               and
                    is_type_correct(clause.right, env)              and
                    new_vars(clause.left) = new_vars(clause.right), //## ISN'T THIS WELL-FORMEDNESS CHECKING?
                    
  and_clause()    = do
                      return false if not is_type_correct(clause.left, env);
                      new_env := merge_envs(env, env_updates(clause.left, env));
                      return is_type_correct(clause.right, new_env);
                    end;


[Var -> Type] env_updates(Clause clause, [Var -> Type] (env)):
  LeafClause     = update_env_many(clause.ptrn, infer_type(clause.src, env), env), //## WON'T TYPECHECK

  or_clause()    = merge_envs(env_updates(clause.left, env), env_updates(clause.right, env)),

  and_clause()   = do
                     new_env_left  := env_updates(clause.left, env);
                     new_env_right := env_updates(clause.right, merge_envs(env, new_env_left));
                     return merge_envs(new_env_left, new_env_right);
                   end;


[Var -> Type] update_env_many(Pattern p, SetType t, [Var -> Type] ext_env)
{
  envs := {env_updates(p, b.type, ext_env, :required) : b <- t.* ; might_match(p, b.type, ext_env)};

  assert {
    vs := new_vars(p);
    return not {? e <- envs ; keys(e) /= vs};    
  };

  return merge_envs(envs);
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

[Var -> Type] env_updates(Statement s, [Var -> Type] (env), [Var -> Type] (constraints)):

  assignment_stmt() = [s.var -> infer_type(s.value, env)],
  
  if_stmt()         = do upds_if_branch   := env_updates(s.body, env, constraints);
                         upds_else_branch := env_updates(s.else, env, constraints);
                         return merge_envs({upds_if_branch, upds_else_branch, env});
                      ;,

  _                 = [->];


Bool is_type_correct([Statement+] stmts, [Var -> Type] env, [Var -> Type] constraints)
{
  for (s : stmts)
    return false if not is_type_correct(s, env, constraints);
    env         := update(env, env_updates(s, env));
    constraints := update_constraints(s, constraints);
  ;
  return true;
}


Bool is_type_correct(Statement s, [Var -> Type] (env), [Var -> Type] (constraints)):
  assignment_stmt()   = do return false if not is_type_correct(s.value, env);
                           expr_type := infer_type(s.value, env);
                           return false if s.type? and is_subset(expr_type, s.type);
                           return true  if not has_key(constraints, s.var);
                           return is_subset(expr_type, constraints[s.var]);
                        ;,

  return_stmt()       = is_type_correct(s.value, env),
  
  if_stmt()           = is_correct_bool_expr(s.cond, env)             and
                        is_type_correct(s.body, env, constraints)     and
                        (s.else = [] or is_type_correct(s.else, env)),
  
  //loop_stmt()         = do return false if not s.skip_first and not is_correct_bool_expr(s.cond, env);
  //                         return false if not is_type_correct(s.body, env, constraints);
  //                         new_env := distructively_update_env(s.body, env);
  //                         return is_correct_bool_expr(s.cond, new_env);
  //                      ;,

  inf_loop_stmt()     = is_type_correct(s.body, env, constraints),
  
  for_stmt()          = do return false if not is_type_correct(s.values, env);
                           return false if not is_seq_type(s.values, env);
                           new_vars := [s.var -> seq_el_type(s.values, env), s.idx_var -> nat_type if s.idx_var?];
                           new_env := merge_envs(env, new_vars);
                           return is_type_correct(s.body, env, constraints);
                        ;,

  assert_stmt()       = is_correct_bool_expr(s.expr, env),
  print_stmt()        = is_type_correct(s.expr, env);


Bool is_correct_bool_expr(Expr e, [Var -> Type] env) = is_type_correct(e, env) and
                                                       is_subset(infer_type(e, env), bool_type);

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

env_updates(p, t, ext_env) = env_updates(p, t, ext_env, :required);

// Assuming that the pattern might match an object of the given type,
// what new variables would be set and what would be their most general type?
[Var -> Type] env_updates(Pattern p, Type t, [Var -> Type] (ext_env), PtrnCard (card)):

  obj_ptrn(),                 _               = [->],
  type_ptrn(),                _               = [->], // BAD
  ext_var_ptrn(v),            _               = [->], // BAD
  
  //## THIS IS NOT QUITE RIGHT, IT SHOULD BE THE INTERSECTION
  //## BETWEEN T AND THE SMALLEST TYPE ENCLOSING THE PATTERN
  var_ptrn(),                 _               = merge_envs(
                                                  [p.name -> adjust_type(t, card)],
                                                  env_updates(p.ptrn, t, ext_env)
                                                ),
  
  //## STILL NOT UPDATED AFTER ADDING THE CLICK PATTERN
  term_ptrn(root: Var, ...),  TermType        = merge_envs(
                                                  [p.root -> adjust_type(singleton(t.root), card)],
                                                  env_updates(p.ptrn, t.type, ext_env, card)
                                                ),
                                                
  term_ptrn(),                TermType        = env_updates(p.ptrn, t.type, ext_env, card), // assert p.root = t.root
  
  set_ptrn(pbs+),             set_type(tbs+)  = env_updates(pbs, tbs, ext_env, card),
  open_set_ptrn(pbs+),        set_type(tbs+)  = env_updates(pbs, tbs, ext_env, card),
  
  split_ptrn(),               SetType         = do
                                                  vt := union_superset({b.type : b <- t.*});
                                                  return [p.v1 -> vt, p.v2 -> vt];
                                                end;

//## SHOULD BE A LOCAL FUNCTION
Type adjust_type(Type (type), PtrnCard card):
  :required   = type,
  _           = set_type{(type: type, card: card)};


[Var -> Type] env_updates(PtrnBranch* pbs, TypeBranch* tbs, [Var -> Type] ext_env, PtrnCard card)
{
  branch_envs := for (pb <- pbs)
                 {{
                   partial_envs := for (tb <- tbs)
                                     if (might_match(pb.ptrn, tb.type, ext_env))
                                       {env_updates(pb.ptrn, tb.type, ext_env, adjust_card(card, pb.card))};

                   vars := new_vars(pb.ptrn);

                   // The set of variables that are set must always be the same
                   assert not {? e <- partial_envs ; keys(e) /= vars};
                    
                   return for (v <- vars)
                            [v -> union_superset({e[v] : e <- partial_envs})];
                 }};

  return merge_envs(branch_envs);

  adjust_card(curr_card, branch_card):
    :any,       _          = :any,
    _,          :any       = :any,
    :required,  :required  = :required,
    _,          _          = :multiple;
}


Bool might_match_element(Pattern p, SetType t, [Var -> Type] env) = {? b <- t.* ; might_match(p, b.type, env)};


Bool might_match(Pattern p, Type t, [Var -> Type] (env)):
  _,                   :type_any       = true,
  
  obj_ptrn(obj),       _               = belongs(obj, t),
  type_ptrn(pt),       _               = intersect(pt, t),
  var_ptrn(),          _               = might_match(p.ptrn, t, env),
  ext_var_ptrn(v),     _               = intersect(env[v], t),

  _,                   union_type(ts+) = {? st <- ts ; might_match(p, st, env)},

  //## STILL NOT UPDATED AFTER ADDING THE CLICK PATTERN
  term_ptrn(),         TermType        = (p.root :: Var or p.root = t.root) and might_match(p.ptrn, t.type, env),

  set_ptrn(bs+),       :empty_set_type = not {? b <- bs ; b.card /= :any},
  set_ptrn(pbs+),      set_type(tbs+)  = sets_might_match(pbs, tbs, false, env),
  
  open_set_ptrn(bs+),  :empty_set_type = not {? b <- bs ; b.card /= :any},
  open_set_ptrn(pbs+), set_type(tbs+)  = sets_might_match(pbs, tbs, true, env),
  
  split_ptrn(),        set_type(bs+)   = size(bs) > 1 or in(card(only_element(bs)), {:any, :multiple}),
  
  _,                   _               = false;


Bool might_match(PtrnBranch* pbs, TypeBranch* tbs, Bool is_open, [Var -> Type] env)
{
  matches := for (pb <- pbs, tb <- tbs)
               if (might_match(pb.ptrn, tb.type, env))
                 {[pb, tb]};

  // Remember that a pattern branch can many type branches and vice-versa
  ptrn_to_type_map := [pb -> {tb : [!pb, tb] <- matches} : [pb, _] <- matches];
  type_to_ptrn_map := reverse(ptrn_to_type_map);
  
  //## FIGURE OUT STRICTER CONDITIONS FOR THE MATCHING TO BE POSSIBLE
  
  // Are there any required/multiple pattern branches
  // that match no type branch?
  return false if {? pb <- pbs ; pb.card /= :any, not {? [!pb, _] <- matches}};

  // If the pattern is open, we're done because there's no need to match
  // all the type branches (they're automatically matched by the "...")
  return true if is_open;

  // Are there any required/multiple type branches
  // that are not matched by any pattern branch?
  return not {? tb <- tbs ; in(card(tb), {:required, :multiple}), not {? [_, !tb] <- matches}};
}




//vs_env  := keys(env);
//vs_if   := keys(upds_if_branch);
//vs_else := keys(upds_else_branch);
//
//// Exiting variables that were uptdated:
////   1) only in the if branch
////   2) only in the else branch
////   3) in both branches
////   4) in neither branch
//
//vs_if_only   := vs_if - vs_else - vs_env;
//vs_else_only := vs_else - vs_if - vs_env;
//vs_both      := intersection(vs_else - vs_if) - vs_env;
//vs_neither   := vs_env - vs_if - vs_else;
//
//
//[v -> upds_if_branch[v] : v <- vs_if_only],
//[v -> upds_else_branch[v] : v <- vs_else_only],
//[v -> union_superset(upds_if_branch[v], upds_else_branch[v]) : v <- vs_both],
