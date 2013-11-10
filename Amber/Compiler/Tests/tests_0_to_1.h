//## ERRORS TO CHECK: 
//##   ALL FUNCTION ARGUMENTS COULD BE DECLARED AS "NOT MATCHED". THE PARSER DOESN'T CHECK
//##   LOCAL FUNCTIONS MUST HAVE PARAMETERS, LOCAL CONSTANTS ARE NOT ALLOWED. IS THAT CHECKED SOMEWHERE?
//##   CHECK THAT THING ABOUT UNTYPED SIGNATURE CONSTRUCTORS


//## BIG BUG TO FIX:
//## ObjPartSet syn_partitions(SynType stype):
//##   type_ref(ts) = syn_partitions(typedefs[ts]), //## I HAVE TO MAKE SURE THE TYPE EXISTS FIRST

//type MyType = get_iter(var: ItVar, set: ObjExpr);
//type MiniExpr = if_expr(cond: Expr, then: Expr, else: Expr);

testcases //disabled

  //all_decls_raw := [_obj_(:decl, 0)];
  //syn_prg       := finish_parsing_job(all_decls_raw);
  ////errs          := user_errors(syn_prg);
  //prg           := rem_syntax(syn_prg);
  //
  //print prg;

  s0 := [0, 1, 2, 3, 4, 5, 6];
  s1 := [10, 11, 12, 13, 14, 15, 16];
  s2 := [20, 21, 22, 23, 24, 25, 26];

  print join([s0, s1, s2]);
  
  //print subseq(s, 0, 3);
  //print subseq(s, 3, 4);
  //print subseq(s, 0, 7);
  
  //x1 := _ordered_(:num, :den);
  //x2 := _ordered_(:den, :num);
  //
  //print _ordered_(:num, :den);
  //print _ordered_(:den, :num);
  //
  //print {:num, :den};
  //print {:den, :num};

  //print rand_sort({:num, :den});
  //print rand_sort({:den, :num});
  
end


//## BUG IN well-formedness checking: it doesn't check that two functions
//## with the same name/arity have the same "hidden" parameters

testcases disabled

  //decl_count    := _obj_(:decl_num);
  //all_decls_raw := [_obj_(:decl, i) : i <- inc_seq(decl_count)];
  //syn_prg       := finish_parsing_job(all_decls_raw);
  //errs          := user_errors(syn_prg);
  //prg           := rem_syntax(syn_prg);

  //errs = {};
  //is_well_formed(prg);

  //print errs;
  //print prg;




  //prg := _obj_(:cache);
  //print :obj_loaded;

  //print size(keys(prg.tdefs));
  //print size(prg.fndefs);

  //code := gen_code(prg);
  //
  ////print "Hello world!";
  //print code;
  //print :done;


  //prg := _obj_(:cache_stage_3);
  //print :obj_loaded;
  //
  //ls := compile_to_c(prg);
  
  //print :code_generated;
  //
  //ls := intermix(ls, "\n");

  //print :newlines_added;
  //print length(ls);
  //
  //s := append(ls);
  //
  //print :strings_concatenated;

  //null := _write_("out.cpp", s);
  
  //print :done;

  //print _file_("in.txt");
  print "abcd0123ABC\n\"\\";



  
  //for (fd : rand_sort(prg.fndefs)) //subseq(rand_sort(prg.fndefs), 0, 2))
  //  code := gen_code(fd) where type_map = prg.tdefs;;
  //  print :ok;
  //  
  //  //code := gen_eval_code(fd.expr, out_var) where type_map = prg.tdefs;;
  //  //print fd;
  //  //print :oooooooo;
  //  //print code;
  //  //print :xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
  //;




  //ps := rand_sort(select Pattern in prg end);
  //
  //print length(ps); //size(select Pattern in prg end); //subseq(ps, 0, 100);
  //print length([p : p <- ps, not to_be_excluded(p)]);
  //
  //counter := 0;
  
  //for (p : subseq(ps, 0, 200)) //subseq(ps, 100, nil, 0))
  //  dummy_var := do return nil if to_be_excluded(p);
  //                  print p;
  //                  print gen_matching_code(
  //                          p,
  //                          fn_par{0},
  //                          bvar{:outcome},
  //                          prg.tdefs,
  //                          [v2 -> :type_any : v2 <- retrieve v from ext_var_ptrn(v) in p end]
  //                        );
  //                  print :xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
  //                  return nil;
  //               ;;
  //;
    
  //tdefs := replace type_var() in prg.tdefs with :type_any end;
  
  //types := rand_sort(keys(tdefs));
  ////types := rand_sort({s : BasicTypeSymbol s <- keys(tdefs)});
  ////types := rand_sort({s : ParTypeSymbol s <- keys(prg.tdefs) ; s.symbol /= :impl_seq_type});
  ////types := rand_sort({s : ParTypeSymbol s <- keys(tdefs) ; s.symbol = :impl_seq_type});
  
  //types := [type_symbol{:miniexpr}];
  //types := [type_symbol{:expr}];
  
  //for (t : types)
  //  print t;
  //  //b := mk_memb_test_fn_body(tdefs[t]) where type_map = tdefs;;
  //  f := mk_named_type_memb_test_fn(t, tdefs);
  //  print f;
  //;
  //
  ////print prg.tdefs[type];
  ////print mk_memb_test_fn_body(prg.tdefs[type]);

end


//String typeid2str(Any):
//  type_symbol(a)  = _str_(a),
//  
//  par_type_symbol(
//    symbol: :impl_seq_type,
//    params: [
//      set_type(
//        [{type: type_any, card: any}]
//      )
//    ]
//  )
//      
//      
//      
//    )
//  ),
//  memb_test(type_id: type_symbol(ptrnbranch)),
//  memb_test(
//    type_id(
//      par_type_symbol(
//        params: [type_any],
//        symbol: type_symbol(bintree)
//      )
//    )
//  ),


//## CHECK THE CONDITIONS FOR A SPLIT PATTERN. CAN IT BE NESTED INSIDE ANOTHER PATTERN?
//## I'D SAY NO. AT LEAST IT SHOULDN'T APPEAR IN A MULTIPLE BRANCH

// for_stmt(loops: [l | ls], body: ss)

to_be_excluded(_):

  obj_ptrn(Symbol) = true,
  
  obj_ptrn(:empty_set) = true,

  obj_ptrn(int(_)) = true,

  var_ptrn() = true,
  
  type_ptrn(_) = true,
  
  ext_var_ptrn(_) = true,
  
  open_set_ptrn((ptrn: obj_ptrn(Symbol), card: :required)) = true,

  term_ptrn(
    root: Symbol,
    ptrn: type_ptrn(set_type: {type: :type_any, card: :any})
  ) = true,
  
  term_ptrn(
    root: Symbol,
    ptrn: set_ptrn((card: :required, ptrn: type_ptrn(:type_any)))
  ) = true,

  set_ptrn(
    ( card: :required,
      ptrn: var_ptrn(ptrn: type_ptrn(Type), name: Var)
    )
  ) = true,

  term_ptrn(
    root: Symbol,
    ptrn(
      set_ptrn(
        ( card: :required,
          ptrn: var_ptrn(name: Var, ptrn: type_ptrn(Type))
        )
      )
    )
  ) = true,

  //## TEMPORARY
  split_ptrn() = true,
  
  //## FROM HERE ON, THE GENERATED CODE IS PRETTY BAD
  
  term_ptrn(
    root: Symbol,
    ptrn: set_ptrn((card: :required, ptrn: obj_ptrn(Symbol)))
  ) = true,

  term_ptrn(
    root: Symbol,
    ptrn(
      set_ptrn((card: :required, ptrn: type_ptrn(Type)))
    )
  ) = true,

  term_ptrn(
    root: Symbol,
    ptrn(
      set_ptrn(
        (
          card: :multiple,
          ptrn: var_ptrn(ptrn: type_ptrn(Type), name: Var)
        )
      )
    )
  ) = true,

  term_ptrn(
    root: Symbol,
    ptrn(
      open_set_ptrn(
        {
          card: :required,
          ptrn(
            term_ptrn(
              root: Symbol,
              ptrn(
                set_ptrn((card: :required, ptrn: type_ptrn(Type)))
              )
            )
          )
        }
      )
    )
  ) = true,

  _ = false;