//## IT WOULD BE USEFUL TO HAVE SYNTACTIC PATTERNS, WITH TUPLE PATTERNS AS SEQUENCES RATHER THAN SETS

type BasicTypeSymbol  = type_symbol(Atom);
type ParTypeSymbol    = par_type_symbol(symbol: BasicTypeSymbol, params: [SynType+]); //## BAD BAD BAD
type TypeSymbol       = BasicTypeSymbol, ParTypeSymbol;

//## THIS TWO TYPEDEFS ARE HERE ONLY TEMPORARILY
type TypeName = type_name(symbol: BasicTypeSymbol, arity: Nat);

///////////////////////////////////////////////////////////////////////////////

type SynType    = atom_type,
                  SymbType,
                  IntType,
                  SynTypeVar,
                  SynTypeRef,
                  SynSetType,
                  SynSeqType,
                  SynMapType,
                  SynTupleType,
                  SynTagType,
                  SynUnionType,
                  SynRecType;

type SynTypeVar   = type_var(<Nat, Atom>);

type SynTypeRef   = type_ref(TypeSymbol);

type SynSeqType   = empty_seq_type, seq_type(elem_type: SynType, nonempty: Bool), fixed_seq_type([SynType+]);

type SynSetType   = empty_set_type, set_type(elem_type: SynType, nonempty: Bool);

type SynMapType   = empty_map_type, map_type(key_type: SynType, value_type: SynType);

type SynTupleType = tuple_type((label: SymbObj, type: SynType, optional: Bool)+);

type SynTagType   = tag_type(tag_type: <SymbType, SymbType+, atom_type, SynTypeRef>, obj_type: SynType);

type SynUnionType = union_type(SynType+);

type SynRecType   = self, rec_type(SynType); //## NOT SURE ABOUT THIS - NEW


/////////////////////////////////////////////////////////////////////////////////////

type SynTypedef    = typedef(name: BasicTypeSymbol, type: SynType);

type SynParTypedef = par_typedef(name: BasicTypeSymbol, params: [TypeVar+], type: SynType);

/////////////////////////////////////////////////////////////////////////////////////

type SynExpr = object(<Atom, Int>),

               seq_expr(head: [SynSubExpr*], tail: SynExpr?),
               set_expr(SynSubExpr*),
               map_expr((key: SynExpr, value: SynExpr, cond: SynExpr?)*),
               tag_obj_expr(tag: SynExpr, obj: SynExpr),

               Var,
                    
               const_or_var(Atom), //## NOT SURE ATOM IS THE RIGHT THING HERE
               
               fn_call(name: FnSymbol, params: [ExtSynExpr*], named_params: [SynFnDef*]), //## NEW
               builtin_call(name: BuiltIn, params: [SynExpr+]),
               
               and(left: SynExpr, right: SynExpr),
               or(left: SynExpr, right: SynExpr),
               not(SynExpr),
               
               eq(left: SynExpr, right: SynExpr),
               neq(left: SynExpr, right: SynExpr),
               
               membership(obj: SynExpr, type: SynType),

               accessor(expr: SynExpr, field: SymbObj),
               accessor_test(expr: SynExpr, field: SymbObj),

               ex_qual(source: [SynClause+], sel_exprs: [SynExpr*]),
               set_comp(expr: SynExpr, source: [SynClause+], sel_exprs: [SynExpr*]),
               map_comp(key_expr: SynExpr, value_expr: SynExpr, source: [SynClause+], sel_exprs: [SynExpr*]),
               seq_comp(expr: SynExpr, var: Var, idx_var: Var?, src_expr: SynExpr, sel_expr: SynExpr?),

               if_expr(branches: [(cond: SynExpr, expr: SynExpr)+], else: SynExpr),
               match_expr(exprs: [SynExpr+], cases: [SynCase+]),
               do_expr([SynStmt+]),

               select_expr(type: SynType, src_expr: SynExpr),
               retrieve_expr(expr: SynExpr, ptrn: SynPtrn, src_expr: SynExpr, cond: SynExpr?),
               replace_expr(expr: SynExpr, src_expr: SynExpr, ptrn: SynPtrn),

               let_expr(expr: SynExpr, stmts: [SynStmt+]);


type SynClsExpr  = cls_expr(params: [<var(Atom)>+], expr: SynExpr); //## NEW

type ExtSynExpr  = SynExpr, SynClsExpr; //## NEW


type SynCondExpr  = cond_expr(expr: SynExpr, cond: SynExpr);

type SynSubExpr   = SynExpr, SynCondExpr;

type SynPtrn      = ptrn_any,
                    obj_ptrn(LeafObj),  //## TO LIMIT IT TO SYMBOL/INTEGER?
                    type_ptrn(SynType),
                    ext_var_ptrn(Var),
                    var_ptrn(name: Var, ptrn: SynPtrn?),
                    tuple_ptrn(fields: (label: SymbObj, ptrn: SynPtrn)+, is_open: Bool),
                    tag_ptrn(tag: <obj_ptrn(SymbObj), var_ptrn(name: Var)>, obj: SynPtrn);

type SynClause    = in_clause(ptrn: SynPtrn, src: SynExpr),
                    not_in_clause(ptrn: SynPtrn, src: SynExpr),
                    map_in_clause(key_ptrn: SynPtrn, value_ptrn: SynPtrn, src: SynExpr),
                    map_not_in_clause(key_ptrn: SynPtrn, value_ptrn: SynPtrn, src: SynExpr),
                    eq_clause(var: Var, expr: SynExpr),
                    and_clause([SynClause+]),
                    or_clause(left: SynClause, right: SynClause);

type SynCase      = case(patterns: [SynPtrn+], expr: SynExpr);  //## CHANGE

type SynStmt      = assignment_stmt(var: Var, value: SynExpr),
                    return_stmt(SynExpr),
                    if_stmt(branches: [(cond: SynExpr, body: [SynStmt+])+], else: [SynStmt*]),
                    loop_stmt(cond: SynExpr, skip_first: Bool, body: [SynStmt+]),
                    inf_loop_stmt([SynStmt+]),
                    for_stmt(loops: [SynIter+], body: [SynStmt+]),
                    let_stmt(asgnms: [SynFnDef+], body: [SynStmt+]), //## NEW
                    break_stmt,
                    fail_stmt,
                    assert_stmt(SynExpr),
                    print_stmt(SynExpr);

type SynIter      = seq_iter(var: Var, idx_var: Var?, values: SynExpr),
                    range_iter(var: Var, start_val: SynExpr, end_val: SynExpr);

/////////////////////////////////////////////////////////////////////////////////////

type SynFnDef       = syn_fn_def(
                        name:       FnSymbol,
                        params:     [(type: SynType?, var: var(Atom)?)*],
                        res_type:   SynType?,
                        expr:       SynExpr,
                        local_fns:  [SynFnDef*]
                      );

type SynSgn         = syn_sgn(
                        name:     FnSymbol,
                        params:   [SynType*],
                        res_type: SynType
                      );

type SynUsingBlock  = using_block(
                        signatures: [SynSgn+],
                        fn_defs:    [SynFnDef+]
                      );

type PrgDecl        = SynTypedef, SynParTypedef, SynFnDef, SynUsingBlock;

type SynPrg         = prg([PrgDecl*]);
