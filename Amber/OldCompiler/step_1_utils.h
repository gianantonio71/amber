
BasicUntypedSng untyped_sgn(<SynFnDef, Signature> d) = untyped_sgn(
                                                         name:  d.name,
                                                         arity: arity(d)
                                                       );

UntypedSng untyped_sgn(SynFnDef fd, Signature+ impl_params) =
  untyped_sgn(
    name:        fd.name,
    arity:       arity(fd),
    impl_params: {untyped_sgn(p) : p <- impl_params} 
  );


UntypedSng* merge_and_override(UntypedSng* low_priority_sgns, UntypedSng* high_priority_sgns)
{
  sngs := {s : s <- low_priority_sgns ; not (? os <- high_priority_sgns : s.name = os.name, s.arity = os.arity)};
  return sngs & high_priority_sgns;
}

Nat arity(SynFnDef d) = length(d.params);

//## FIND BETTER NAME
Bool is_almost_def(FnSymbol name, Nat arity, UntypedSng* env) = (? s <- env : s.name = name, s.arity = arity);

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

Var* syn_new_vars(SynStmt stmt):
  assignment_stmt() = {stmt.var},
  if_stmt()         = intersection(
                        {syn_new_vars(b.body) : b <- set(stmt.branches)} & {syn_new_vars(stmt.else)}
                      ),
  _                 = {};


Var* syn_new_vars([<SynStmt, SynClause>*] objs) = seq_union([syn_new_vars(obj) : obj <- objs]);


Var* syn_new_vars(SynClause clause):
  in_clause()           = new_vars(clause.ptrn),
  not_in_clause()       = {},
  map_in_clause()       = new_vars(clause.key_ptrn) & new_vars(clause.value_ptrn),
  map_not_in_clause()   = {},
  eq_clause()           = {clause.var},
  and_clause(cs)        = seq_union([syn_new_vars(c) : c <- cs]),
  or_clause()           = intersection(syn_new_vars(clause.left), syn_new_vars(clause.right));


Var* syn_new_vars(SynIter iter):
  seq_iter()    = {iter.var, iter.idx_var if iter.idx_var?},
  range_iter()  = {iter.var};

