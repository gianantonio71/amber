
type Obj        = object(Any);

type SymbObj    = object(Atom);
type LeafObj    = object(<Atom, Int>);

///////////////////////////////////////////////////////////////////////////////

type BasicTypeSymbol  = type_symbol(Atom);
type ParTypeSymbol    = par_type_symbol(symbol: BasicTypeSymbol, params: [Type+]);
type TypeSymbol       = BasicTypeSymbol, ParTypeSymbol;

///////////////////////////////////////////////////////////////////////////////

type Type       = type_any,
                  atom_type,
                  SymbType,
                  IntType,
                  TypeRef,
                  TypeVar,
                  SetType,
                  SeqType,
                  MapType,
                  TupleType,
                  TagType,
                  UnionType;

type SymbType   = symb_type(SymbObj);

type IntType    = integer, low_ints(max: Int), high_ints(min: Int), int_range(min: Int, size: NzNat);

type TypeRef    = type_ref(TypeSymbol);

type TypeVar    = type_var(Atom);

type SeqType    = empty_seq_type, seq_type(elem_type: Type, nonempty: Bool), fixed_seq_type([Type+]);

type SetType    = empty_set_type, set_type(elem_type: Type, nonempty: Bool);

type MapType    = empty_map_type, map_type(key_type: Type, value_type: Type);

type TupleType  = tuple_type((label: SymbObj, type: Type, optional: Bool)+);

                  //## THE FIELD tag_type SHOULD BE OF TYPE <SymbType, SymbType+, atom_type>
type TagType    = tag_type(tag_type: Type, obj_type: Type);

type UnionType  = union_type(Type+);

///////////////////////////////////////////////////////////////////////////////

type Operator = plus, minus, star, slash, exp, amp, lower, greater, lower_eq, greater_eq, brackets;

type BuiltIn  = neg, add, counter, str, symb, at, len, slice, cat, rev, set, mset, isort, list_to_seq;

type FnSymbol = fn_symbol(Atom),
                op_symbol(Operator),
                nested_fn_symbol(outer: FnSymbol, inner: FnSymbol); //## BAD BAD

type Var      = var(Atom), fn_par(Nat), unique_var(Nat); //## BAD BAD BAD

type CondExpr = cond_expr(expr: Expr, cond: Expr);

type SubExpr  = Expr, CondExpr;

type Expr     = LeafObj, //## UPDATE ALL REFERENCES

                set_expr(SubExpr*), //## MAYBE I SHOULDN'T ALLOW EMPTY EXPRESSIONS
                seq_expr(head: [SubExpr*], tail: Expr?), //## I DON'T LIKE THIS MUCH
                map_expr((key: Expr, value: Expr, cond: Expr?)*),
                tag_obj_expr(tag: Expr, obj: Expr),

                Var,

                fn_call(name: FnSymbol, params: [Expr*]),
                cls_call(name: FnSymbol, params: [Expr*]),
                builtin_call(name: BuiltIn, params: [Expr*]), //## CAN A BUILTIN HAVE NO ARGUMENTS?

                and_expr(left: Expr, right: Expr), //## NOT SURE HERE
                or_expr(left: Expr, right: Expr),  //## NOT SURE HERE
                not_expr(Expr),                    //## NOT SURE HERE
                
                eq(left: Expr, right: Expr),
                membership(obj: Expr, type: Type),
                
                accessor(expr: Expr, field: SymbObj),      //## SHOULD <field> BE AN OBJECT OR JUST A PLAIN SYMBOL?
                accessor_test(expr: Expr, field: SymbObj), //## DITTO

                if_expr(cond: Expr, then: Expr, else: Expr),
                match_expr(exprs: [Expr+], cases: [(ptrns: [Pattern+], expr: Expr)+]),
                do_expr([Statement+]),

                ex_qual(source: Clause, sel_expr: Expr?),
                set_comp(expr: Expr, source: Clause, sel_expr: Expr?),
                map_comp(key_expr: Expr, value_expr: Expr, source: Clause, sel_expr: Expr?),
                seq_comp(expr: Expr, var: Var, idx_var: Var?, src_expr: Expr, sel_expr: Expr?),

                select_expr(expr: Expr, ptrn: Pattern, src_expr: Expr, cond: Expr?),
                replace_expr(expr: Expr, src_expr: Expr, ptrn: Pattern),

                where_expr(expr: Expr, fndefs: (name: FnSymbol, vars: [<Var, nil>*], body: Expr)+); //## SHOULD BE NAMED expr, NOT body

///////////////////////////////////////////////////////////////////////////////

type Pattern  = obj_ptrn(LeafObj),  //## TO LIMIT IT TO SYMBOL/INTEGER?
                type_ptrn(Type),
                ext_var_ptrn(Var),
                var_ptrn(name: Var, ptrn: Pattern?),
                //## FIELDS SHOULD BE A MAP FROM LABELS TO PATTERNS
                //## THIS WOULD CAUSE PROBLEMS AT LEVEL 1 THOUGH
                //## AND I WOULD NEED A NON-EMPTY MAP TYPE
                tuple_ptrn(fields: (label: SymbObj, ptrn: Pattern)+, is_open: Bool),
                tag_ptrn(tag: <obj_ptrn(SymbObj), var_ptrn(name: Var)>, obj: Pattern);

////////////////////////////////////////////////////////////////////////////////

type Clause   = in_clause(ptrn: Pattern, src: Expr),
                not_in_clause(ptrn: Pattern, src: Expr),
                map_in_clause(key_ptrn: Pattern, value_ptrn: Pattern, src: Expr),
                map_not_in_clause(key_ptrn: Pattern, value_ptrn: Pattern, src: Expr),
                and_clause(left: Clause, right: Clause),
                or_clause(left: Clause, right: Clause);

////////////////////////////////////////////////////////////////////////////////

type Statement  = assignment_stmt(var: Var, value: Expr),// type: Type?),
                  return_stmt(Expr),
                  if_stmt(cond: Expr, body: [Statement+], else: [Statement*]),
                  loop_stmt([Statement+]),
                  foreach_stmt(var: Var, idx_var: Var?, values: Expr, body: [Statement+]),
                  for_stmt(var: Var, start_val: Expr, end_val: Expr, body: [Statement+]),
                  break_stmt,
                  fail_stmt,
                  assert_stmt(Expr),
                  print_stmt(Expr);

///////////////////////////////////////////////////////////////////////////////

type Signature  = signature(
                    name:     FnSymbol,
                    params:   [Type*],
                    res_type: Type
                  );

type FnDef      = fn_def(
                    name:     FnSymbol,
                    params:   [(type: Type?, var: Var?)*],
                    res_type: Type?,
                    impl_env: Signature*,
                    expr:     Expr
                  );

type Program    = program(
                    tdefs:  (TypeSymbol => Type),
                    fndefs: FnDef*
                  );
