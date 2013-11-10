
using
  next_set_it_var_id -> Nat;
  next_seq_it_var_id -> Nat;
  next_map_it_var_id -> Nat;
  next_obj_var_id    -> Nat;
  next_int_var_id    -> Nat;

def

  [Instr+] gen_ptrn_matching_code(Pattern ptrn, AtomicExpr obj, BoolVar res_var):
    
    obj_ptrn(LeafObj x) = [set_bvar(res_var, is_eq(obj, x))],
    
    type_ptrn(t)        = gen_type_checking_code(t, obj, res_var),
    
    ext_var_ptrn(v)     = [set_bvar(res_var, is_eq(obj, v))],
    
    //## THIS WORKS ONLY IF THE PATTERNS THAT REFERENCE A LOCALLY BOUND VAR
    //## ARE TURNED INTO ext_var_ptrn() OBJECTS
    var_ptrn()          = if ptrn.ptrn? then
                            gen_ptrn_matching_code(ptrn.ptrn, obj, res_var) &
                            [do_if(res_var, set_var(ptrn.name, obj))]
                          else
                            [set_var(ptrn.name, obj), set_bvar(res_var, true)]
                          end,
    
    tuple_ptrn() = {
      //## BUG BUG BUG THIS IS A WORKAROUND FOR A BUG IN THE INTERPRETER
      it_var_id   := next_map_it_var_id;
      obj_var_id  := next_obj_var_id;
      
      it_var   := map_it_var(it_var_id);
      obj_var  := lvar(obj_var_id);

      sorted_fields := sort_set(ptrn.fields) where is_strictly_ordered(f1, f2) = _str_(untag(f1.label)) < _str_(untag(f2.label));;
      
      code := [ maybe_op(block_success_if(is_empty_map(obj), res_var), sorted_fields = []),
                block_failure_if_not(is_ne_map(obj), res_var),
                maybe_op(block_failure_if_not(is_eq(get_map_size(obj), length(sorted_fields)), res_var), not ptrn.is_open),
                maybe_op(get_iter(it_var, obj), not ptrn.is_open)
              ];
      
      //## BAD BAD BAD SEE IF THE CODE CAN BE MADE A BIT NICER
      if (ptrn.is_open)
        //## MAYBE HERE I SHOULD CHECK THAT THE OBJECT
        //## IS ACTUALLY A TUPLE, NOT JUST A MAP
        for (f : sorted_fields)
          code := code & [ lookup(res_var, obj_var, obj, f.label),
                           exit_block_if_not(res_var)
                         ] &
                         gen_ptrn_matching_code(f.ptrn, obj_var, res_var) &
                         [ exit_block_if_not(res_var)]
                         where
                           next_map_it_var_id = it_var_id + 1;
                           next_obj_var_id    = obj_var_id + 1;
                         ;
        ;
      else
        for (f, i : sorted_fields)
          code := code & [ maybe_op(move_forward(it_var), i > 0), //block_failure_if(is_out_of_range(it_var), res_var),
                           set_var(obj_var, get_curr_key(it_var)),
                           block_failure_if_not(is_eq(obj_var, f.label), res_var),
                           set_var(obj_var, get_curr_value(it_var))
                         ] &
                         gen_ptrn_matching_code(f.ptrn, obj_var, res_var) &
                         [ exit_block_if_not(res_var)//,
                           //move_forward(it_var)
                         ]
                         where
                           next_map_it_var_id = it_var_id + 1;
                           next_obj_var_id    = obj_var_id + 1;
                         ;
        ;
      ;

      return [execute_block(code)];
    },
    
    tag_ptrn() = {
      //## BUG BUG BUG THIS IS A WORKAROUND FOR A BUG IN THE INTERPRETER
      var_id := next_obj_var_id;
      
      var  := lvar(var_id);
      
      code := [ block_failure_if_not(is_tagged_obj(obj), res_var),
                set_var(var, get_tag(obj))
              ] &
              gen_ptrn_matching_code(ptrn.tag, var, res_var) &
              [ exit_block_if_not(res_var),
                set_var(var, get_inner_obj(obj))
              ] &
              gen_ptrn_matching_code(ptrn.obj, var, res_var)
              where
                next_obj_var_id = var_id + 1;
              ;

      return [execute_block(code)];
    };

end


  
//using
//  type_map         -> [Any -> Type];
//  
//def
//
//  [Instr+] gen_ptrn_matching_code(Pattern ptrn, ObjExpr expr, BoolVar res_var)
//  {
//    vvs              := vector_vars(ptrn);
//    sorted_vvs       := rand_sort(vvs);
//    strm_vars_map    := [v -> new_strm_var : v <- vvs];
//    sorted_strm_vars := rand_sort(values(strm_vars_map));
//
//    init_code         := [init_stream(v) : v <- sorted_strm_vars];
//    finalization_code := [do_if(res_var, [mk_set(v, strm_vars_map[v]) : v <- sorted_vvs])];
//
//    matching_code     := gen_core_matching_code(ptrn, expr, res_var)
//                         where
//                           is_vector_var(v)   = in(v, vvs);
//                           var_to_strm_var(v) = strm_vars_map[v];
//                         ;
//
//    return init_code & matching_code & finalization_code;
//  }
//
//end
//
//
//using
//  type_map           -> [Any -> Type];
//  is_vector_var(Var) -> Bool;
//  var_to_strm_var(Var)  -> StreamVar;
//  
//def
//
//  [Instr+] set_or_append_var(Var v, ObjExpr e) = if is_vector_var(v)
//                                                   then [append(var_to_strm_var(v), e)]
//                                                   else [set_var(v, e)];
//                                                 ;
//
//
//  [Instr+] gen_core_matching_code(Pattern ptrn, ObjExpr (expr), BoolVar (res_var)):
//  
//    obj_ptrn(obj)       = [set_bvar(res_var, is_eq(expr, literal(obj)))],
//    
//    type_ptrn(type)     = gen_type_checking_code(type, expr, res_var),
//    
//    ext_var_ptrn(var)   = [set_bvar(res_var, is_eq(expr, var))],
//
//    var_ptrn()          = gen_core_matching_code(ptrn.ptrn, expr, res_var) &
//                          [do_if(res_var, set_or_append_var(ptrn.name, expr))],
//
//    set_ptrn(bs+)       = gen_core_matching_code(bs, expr, res_var, false),
//    open_set_ptrn(bs+)  = gen_core_matching_code(bs, expr, res_var, true),
//
//    split_ptrn()        = do strm_var1 := new_strm_var;
//                             strm_var2 := new_strm_var;
//                             itvar     := new_set_itvar;
//
//                             cond := and_then(is_ne_set(expr), is_ge(get_set_size(expr), 2));
//                             
//                             body := [ get_iter(itvar, expr),
//                                       init_stream(strm_var1),
//                                       init_stream(strm_var2),
//                                       repeat([
//                                         break_if(is_out_range(itvar)),
//                                         append(strm_var1, get_obj(itvar)),
//                                         move_forward(itvar),
//                                         break_if(is_out_range(itvar)),
//                                         append(strm_var2, get_obj(itvar)),
//                                         move_forward(itvar)
//                                       ]),
//                                       mk_set(ptrn.var1, strm_var1),
//                                       mk_set(ptrn.var2, strm_var2)
//                                     ];
//                             
//                             return [set_bvar(res_var, cond), do_if(res_var, body)];
//                          ;,
//
//    click_ptrn()        = [ set_bvar(res_var, is_term(expr)),
//                            do_if(res_var,
//                              //## BAD BAD BAD MEMORY LEAK
//                              set_or_append_var(ptrn.root, get_root(expr)) &
//                              [get_inner_set(tmp_var, expr)]               &
//                              set_or_append_var(ptrn.set, tmp_var)         &
//                              [do_if(is_term(expr), release(tmp_var))]
//                            )
//                          ]
//                          let
//                            tmp_var := new_lvar;
//                          ,
//
//    term_ptrn()         = { cond := and_then(is_term(expr), is_eq(get_root(expr), ptrn.root));
//                            
//                            tmp_var := new_lvar;
//                            //## BAD BAD BAD MEMORY LEAK
//                            body := [get_inner_set(tmp_var, expr)]                      &
//                                    gen_core_matching_code(ptrn.ptrn, tmp_var, res_var) &
//                                    [do_if(is_term(expr), release(tmp_var))];
//                            
//                            return [set_bvar(res_var, cond), do_if(res_var, body)];
//                          };
//
//
//                                    
//  [Instr+] gen_core_matching_code(PtrnBranch* branches, ObjExpr expr, BoolVar res_var, Bool is_open)
//  {
//    body := [];
//
//    // If it accept empty sets, then we check for it    
//    if (not {? b <- branches ; b.card /= :any})
//      body := body & [set_bvar_and_exit_if(is_empty_set(expr), res_var, true)];;
//
//    // Making sure it's a non-empty set
//    body := body & [set_bvar_and_exit_if_not(is_ne_set(expr), res_var, false)];
//    
//    // Initializing the iterator
//    itvar := new_set_itvar;
//    body  := body & [get_iter(itvar, expr)];
//    
//    // Taking care of the "any" branch
//    if ({? b <- branches ; partitions_with_var_of_type_any(b.ptrn) = :all_objs})
//      return [execute_block(body & gen_matching_code_for_any(branches, expr, itvar, res_var, is_open))];;
//
//    // Initializing counter variables
//    body := body & [set_ivar(ivar{p}, 0) : p <- rand_sort({b.ptrn : b <- branches ; b.card /= :any})];
//    
//    if_symb_body := gen_matching_code_for_symbols(branches, itvar, res_var, is_open);
//    if_int_body  := gen_matching_code_for_integers(branches, itvar, res_var, is_open);
//    if_set_body  := gen_matching_code_for_sets(branches, itvar, res_var, is_open);
//    if_term_body := gen_matching_code_for_terms(branches, itvar, res_var, is_open);
//
//    branch_stmt := branch(is_set(get_obj(itvar)), if_set_body, if_term_body); //## BUG BUG BUG
//    branch_stmt := branch(is_int(get_obj(itvar)), if_int_body, [branch_stmt]);
//    branch_stmt := branch(is_symb(get_obj(itvar)), if_symb_body, [branch_stmt]);
//    
//    body := body & mk_loop(itvar, [branch_stmt]);
//
//    // Checking cardinalities
//    for (b : rand_sort({b : b <- branches ; b.card /= :any}))
//      cond := try (b.card)
//                :required  = is_eq(ivar{b.ptrn}, 1),
//                :multiple  = is_ge(ivar{b.ptrn}, 1);
//              ;
//                          
//      body := body & [set_bvar_and_exit_if_not(cond, res_var, false)];
//    ;
//
//    return [execute_block(body & [set_bvar(res_var, true)])];
//  }
//    
//    
//  [Instr+] gen_matching_code_for_any(PtrnBranch* branches, ObjExpr expr, SetItVar itvar, BoolVar res_var, Bool is_open)
//  {
//    assert is_open = false; //## NOT QUITE SURE ABOUT THIS ONE
//    assert size(branches) = 1 and partitions_with_var_of_type_any(only_element(branches).ptrn) = :all_objs;
//
//    branch := only_element(branches);
//    ptrn   := branch.ptrn;
//    card   := branch.card;
//    
//    body := [];
//    
//    if (card /= :any)
//      size_expr := get_set_size(expr);
//      
//      cond := try (card)
//                :required = is_eq(size_expr, 1),
//                :multiple = is_ge(size_expr, 1);
//              ;
//
//      body := [set_bvar_and_exit_if_not(cond, res_var, false)];
//    ;
//    
//    loop_body := gen_core_matching_code(ptrn, get_obj(itvar), res_var)  &
//                 if not is_open then [exit_block_if_not(res_var)] else [] end;
//
//    return body & mk_loop(itvar, loop_body) & [set_bvar(res_var, true)];
//  }
//
//
//  [Instr*] gen_matching_code_for_symbols(PtrnBranch* branches, SetItVar itvar, BoolVar res_var, Bool is_open)
//  {
//    symb_bs := {b : b <- branches ; not are_disjoint(partitions_with_var_of_type_any(b.ptrn), :all_leaves)};
//    symb_ps := [p -> b : b <- symb_bs, p = filter_symb_parts(partitions_with_var_of_type_any(b.ptrn))];
//
//    assert symb_ps :: [{<all_leaves, leaf(Atom)>*} -> PtrnBranch];
//    assert not in({}, keys(symb_ps));
//    assert union(keys(symb_ps)) = {:all_leaves} or not in(:all_leaves, union(keys(symb_ps)));
//    
//    if (symb_ps = [->])
//      return if is_open then [] else set_bvar_and_exit(res_var, false) end;
//    ;
//
//    if (union(keys(symb_ps)) = {:all_leaves})
//      branch := only_element(symb_bs);
//      ptrn   := branch.ptrn;
//
//      return gen_matching_code_for_candidate_branch(ptrn, itvar, res_var, is_open);
//    ;
//  
//    assert not has_key(symb_ps, :all_leaves);
//    assert size(keys(symb_ps)) > 0;
//    
//    return [ symbol_switch(
//               get_obj(itvar),
//               for ([ss, b] <- symb_ps) {(
//                 vals:   {symbol{unwrap(s)} : s <- ss},
//                 instrs: gen_matching_code_for_candidate_branch(b.ptrn, itvar, res_var, is_open)
//               )},
//               if is_open then [] else set_bvar_and_exit(res_var, false) end
//             )
//           ];
//
//
//    <all_leaves, leaf(Atom)>* filter_symb_parts(ObjPartSet ps):
//      :all_leaves   = {:all_leaves},
//      Set           = {l : leaf(_) l <- ps};
//  }
//
//
//  [Instr*] gen_matching_code_for_terms(PtrnBranch* branches, SetItVar itvar, BoolVar res_var, Bool is_open)
//  {
//    bs  := {b : b <- branches ; not are_disjoint(partitions_with_var_of_type_any(b.ptrn), :all_terms)};
//    map := [p -> b : b <- bs, p = filter_term_parts(partitions_with_var_of_type_any(b.ptrn))];
//    ps  := union(keys(map));
//    
//    assert not in({}, keys(map));
//    assert ps = {:all_terms} or not in(:all_terms, ps);
//    
//    if (ps = {:all_terms})
//      return gen_matching_code_for_candidate_branch(only_element(bs).ptrn, itvar, res_var, is_open);;
//    
//    if (ps = {})
//      return if is_open then [] else set_bvar_and_exit(res_var, false) end;;
//    
//    return [symbol_switch(
//              get_root(get_obj(itvar)),
//              for ([ss, b] <- map) {(
//                vals:   {symbol{unwrap(s)} : s <- ss},
//                instrs: gen_matching_code_for_candidate_branch(b.ptrn, itvar, res_var, is_open)
//              )},
//              if is_open then [] else set_bvar_and_exit(res_var, false) end
//           )];
//    
//  
//    <all_terms, term(Atom)>* filter_term_parts(ObjPartSet ps):
//      :all_terms   = {:all_terms},
//      Set           = {l : term(_) l <- ps};
//  }
//
//
//  [Instr*] gen_matching_code_for_integers(PtrnBranch* branches, SetItVar itvar, BoolVar res_var, Bool is_open)
//  {
//    bs  := {b : b <- branches ; not are_disjoint(partitions_with_var_of_type_any(b.ptrn), :int)};
//    assert size(bs) <= 1;
//  
//    if (bs /= {})
//      return gen_matching_code_for_candidate_branch(only_element(bs).ptrn, itvar, res_var, is_open);;
//
//    return if not is_open then set_bvar_and_exit(res_var, false) else [] end;
//  }
//
//  //## THIS FUNCTION IN IDENTICAL TO THE PREVIOUS ONE SAVE FOR HAVING :set INSTEAD OF :int
//  [Instr*] gen_matching_code_for_sets(PtrnBranch* branches, SetItVar itvar, BoolVar res_var, Bool is_open)
//  {
//    bs  := {b : b <- branches ; not are_disjoint(partitions_with_var_of_type_any(b.ptrn), :set)};
//    assert size(bs) <= 1;
//    
//    if (bs /= {})
//      return gen_matching_code_for_candidate_branch(only_element(bs).ptrn, itvar, res_var, is_open);;
//      
//    return if not is_open then set_bvar_and_exit(res_var, false) else [] end;
//  }
//
//
//  [Instr+] gen_matching_code_for_candidate_branch(Pattern ptrn, SetItVar itvar, BoolVar res_var, Bool is_open)
//  {
//    //## AS AN OPTIMIZATION, I SHOULD DO THIS TRANSACTION THING ONLY WHEN THERE ACTUALLY
//    //## IS THE POSSIBILITY THAT THE PROCESS CAN RECOVER FROM A FAILED BRANCH MATCHING
//    vvs := rand_sort({v : v <- all_vars(ptrn) ; is_vector_var(v)});
//    
//    succ_code    := [commit(v) : v <- vvs]  & [increment(ivar{ptrn})];
//    
//    failure_code := [rollback(v) : v <- vvs];
//    failure_code := failure_code & set_bvar_and_exit(res_var, false) if not is_open;
//
//    return  [mk_checkpoint(v) : v <- vvs]                         &
//            gen_core_matching_code(ptrn, get_obj(itvar), res_var) &
//            [branch(res_var, succ_code, failure_code)];
//  }
//
//end
//
//
//
//Var* all_vars(Pattern ptrn) = scalar_vars(ptrn) & vector_vars(ptrn);
//
//Var* scalar_vars(Pattern ptrn):
//  var_ptrn()          = scalar_vars(ptrn.ptrn) & {ptrn.name},
//  term_ptrn()         = scalar_vars(ptrn.ptrn) & if ptrn.root :: Var then {ptrn.root} else {} end,
//  split_ptrn()        = {ptrn.var1, ptrn.var2},
//  set_ptrn(bs+)       = union({scalar_vars(b.ptrn) : b <- bs ; b.card = :required}),
//  open_set_ptrn(bs+)  = union({scalar_vars(b.ptrn) : b <- bs ; b.card = :required}), //## BAD
//  _                   = {};
//
//
//Var* vector_vars(Pattern ptrn):
//  var_ptrn()          = vector_vars(ptrn.ptrn),
//  term_ptrn()         = vector_vars(ptrn.ptrn), //## BAD
//
//  set_ptrn(bs+)       = union({vector_vars(b) : b <- bs}),
//  open_set_ptrn(bs+)  = union({vector_vars(b) : b <- bs}), //## BAD
//  
//  _                   = {};
//
//
//Var* vector_vars(PtrnBranch branch)
//{
//  assert branch.card = :required or vector_vars(branch.ptrn) = {};
//  
//  return if branch.card = :required
//           then vector_vars(branch.ptrn)
//           else scalar_vars(branch.ptrn);
//         ;
//}
