
using
  typedefs      -> (TypeSymbol => Type);
  type_vars     -> TypeVar*;
  fns_in_scope	-> UntypedSng*;
  impl_params   -> BasicUntypedSng*;

def

  Tautology expr_is_wf(Expr expr, Var* vars)
  {
    return false if (? e <- ordinary_subexprs(expr) : not expr_is_wf(e, vars));
    gvs := vars & gen_vars(expr);
    return false if (? e <- special_subexprs(expr) : not expr_is_wf(e, gvs));
    return rest_is_wf(expr, vars);
    
    rest_is_wf(expr, vars):
      Var              = in(expr, vars),
      fn_call()        = is_def(expr.name, length(expr.params), fns_in_scope),
      cls_call()       = is_def(expr.name, length(expr.params), impl_params),
      builtin_call()   = arity_is_correct(expr.name, length(expr.params)),
      membership()     = type_is_wf(expr.type, typedefs, type_vars),
      ex_qual()        = clause_is_wf(expr.source, vars),
      set_comp()       = clause_is_wf(expr.source, vars),
      map_comp()       = clause_is_wf(expr.source, vars),
      seq_comp()       = (not expr.idx_var? or expr.var /= expr.idx_var) and disjoint(gen_vars(expr), vars),
      match_expr()     = all([case_is_wf(c, vars, length(expr.exprs)) : c <- expr.cases]),
      do_expr(ss)      = stmts_are_wf(ss, vars),
      select_expr()    = ptrn_is_wf(expr.ptrn, vars),
      replace_expr()   = ptrn_is_wf(expr.ptrn, vars),
      where_expr()     = { gen_params := for (fd <- expr.fndefs) {
                                           untyped_sgn(name: fd.name, arity: length(fd.vars))
                                         };
                           new_impl_params := impl_params & gen_params; //## BAD, IT'S NECESSARY BECAUSE OF A BUG OF THE INTERPRETER
                           return expr_is_wf(expr.expr, vars) where impl_params = new_impl_params;;
                        },
      _                = true;
  }


  Tautology case_is_wf(<(ptrns: [Pattern+], expr: Expr)> case, Var *vars, NzNat arg_count) //## UGLY UGLY
  {
    return false if length(case.ptrns) /= arg_count;
    
    vs := vars;
    
    for (p : case.ptrns)
      pvs := new_vars(p);
      // Passing an empty ext env here allows for detection of bound variables.
      return false if not disjoint(pvs, vs) or not ptrn_is_wf(p, {});
      return false if p :: <var_ptrn(name: Var)>;  //## BAD BAD BAD
      vs  := vs & pvs;
    ;

    return expr_is_wf(case.expr, vs);  
  }

  //////////////////////////////////////////////////////////////////////////////

  Tautology clause_is_wf(Clause clause, Var* ext_vars) = clause_is_wf(clause, ext_vars, {});
  
  Tautology clause_is_wf(Clause clause, Var* ext_vars, Var* loc_vars): //## BAD BAD BAD

    in_clause()         = ptrn_is_wf(clause.ptrn, ext_vars) and
                          expr_is_wf(clause.src, ext_vars & loc_vars),

    not_in_clause()     = ptrn_is_wf(clause.ptrn, ext_vars) and
                          expr_is_wf(clause.src, ext_vars & loc_vars),
                          //## WHAT WAS THIS FOR?
                          //and disjoint(new_vars(clause.ptrn), vars_in_scope),

    map_in_clause()     = ptrn_is_wf(clause.key_ptrn, ext_vars)   and
                          ptrn_is_wf(clause.value_ptrn, ext_vars) and
                          expr_is_wf(clause.src, ext_vars & loc_vars),
    
    map_not_in_clause() = ptrn_is_wf(clause.key_ptrn, ext_vars)   and
                          ptrn_is_wf(clause.value_ptrn, ext_vars) and
                          expr_is_wf(clause.src, ext_vars & loc_vars),
                          //## WHAT WAS THIS FOR?
                          //and disjoint(new_vars(clause.ptrn), vars_in_scope),

    and_clause()        = clause_is_wf(clause.left, ext_vars, loc_vars) and
                          clause_is_wf(clause.right, ext_vars, loc_vars & new_vars(clause.left)),

    or_clause()         = clause_is_wf(clause.left, ext_vars, loc_vars) and
                          clause_is_wf(clause.right, ext_vars, loc_vars);

  //////////////////////////////////////////////////////////////////////////////

  Tautology ptrn_is_wf(Pattern ptrn, Var* ext_vars):

    obj_ptrn()        = true,

    //## NOT SURE ABOUT TYPE VARS HERE. SHOULD I ALLOW THEM IN PATTERNS?
    //## IN ANY CASE, I DON'T THINK THIS IS CHECKED AT LEVEL 1, SO FIX THAT
    type_ptrn(t)      = type_is_wf(t, typedefs, {}),

    ext_var_ptrn(v)   = in(v, ext_vars),

    var_ptrn()        = { return false if in(ptrn.name, ext_vars);
                          return true  if not ptrn.ptrn?;
                          return not in(ptrn.name, new_vars(ptrn.ptrn)) and
                                 ptrn_is_wf(ptrn.ptrn, ext_vars);
                        },

    //## WHICH ONE IS BETTER THE PREVIOUS ONE OR THIS ONE?
    //## I DON'T PARTICULARLY LIKE EITHER. IS THERE A BETTER WAY?
    //var_ptrn()        = not in(ptrn.name, ext_vars) and
    //                    ( not ptrn.ptrn? or
    //                      ( not in(ptrn.name, new_vars(ptrn.ptrn)) and
    //                        ptrn_is_wf(ptrn.ptrn, ext_vars)
    //                      )
    //                    ),

    tuple_ptrn()      = { ls := apply(ptrn.fields) where f(b) = b.label;;
                          return false if (? l => c <- ls : c > 1);
                          fs := ptrn.fields;
                          return false if (? b <- fs : not ptrn_is_wf(b.ptrn, ext_vars));
                          //## BAD BAD BAD
                          return not (? b1 <- fs, b2 <- fs : b1 /= b2,
                                        not disjoint(new_vars(b1.ptrn), new_vars(b2.ptrn)));
                        },

    tag_ptrn()        = { if (ptrn.tag :: <var_ptrn(Any)>) //## BAD BAD BAD
                            return false if in(ptrn.tag.name, new_vars(ptrn.obj));
                          ;
                          return ptrn_is_wf(ptrn.obj, ext_vars);                        
                        };

  //////////////////////////////////////////////////////////////////////////////

  Tautology stmts_are_wf([Statement+] stmts, Var* vars) = stmts_are_wf(stmts, vars, false, true);

  Tautology stmts_are_wf([Statement+] stmts, Var* vars, Bool is_inside_loop, Bool needs_return)
  {
    vs        := vars;
    reachable := true;

    for (s, i : stmts)
      return false if not reachable or not stmt_is_wf(s, vs, is_inside_loop);
      vs        := vs & new_vars(s);
      reachable := reachable and not is_last_for_sure(s);
    ;

    return not needs_return or not reachable;
  }

  
  Tautology stmt_is_wf(Statement stmt, Var* vars, Bool is_inside_loop):

    assignment_stmt() = expr_is_wf(stmt.value, vars), // and (not stmt.type? or type_is_wf(stmt.type)),
    
    return_stmt(e)    = expr_is_wf(e, vars),
    
    :break_stmt       = is_inside_loop,
    
    :fail_stmt        = true,
    
    assert_stmt(e)    = expr_is_wf(e, vars),
    
    print_stmt(e)     = expr_is_wf(e, vars),

    if_stmt()         = expr_is_wf(stmt.cond, vars)                          and
                        stmts_are_wf(stmt.body, vars, is_inside_loop, false) and
                        (stmt.else = [] or stmts_are_wf(stmt.else, vars, is_inside_loop, false)),
    
                        //## THERE MUST BE A WAY OUT, A BREAK OR A RETURN
    loop_stmt(ss)     = stmts_are_wf(ss, vars, true, false),
    
                        //## SHOULD THE LOOP VARIABLES BE READ-ONLY?
    foreach_stmt()    = { nvs := {stmt.var, stmt.idx_var if stmt.idx_var?};
                          return disjoint(nvs, vars)           and
                                 expr_is_wf(stmt.values, vars) and
                                 stmts_are_wf(stmt.body, vars & nvs, true, false);
                        },

                        //## SHOULD THE LOOP VARIABLES BE READ-ONLY?
    for_stmt()        = not in(stmt.var, vars)            and
                        expr_is_wf(stmt.start_val, vars)  and
                        expr_is_wf(stmt.end_val, vars)    and
                        stmts_are_wf(stmt.body, vars & {stmt.var}, true, false);

end
