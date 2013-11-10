
Program rem_syntax(SynPrg prg)
{
  norm_prg := replace Type t in prg with norm_type(t) end;
  decls    := set(untag(norm_prg));
  
  tdefs     := {d : SynTypedef d <- decls};
  par_tdefs := {d : SynParTypedef d <- decls};
  fndefs    := {d : SynFnDef d <- decls};
  ublocks   := {d : SynUsingBlock d <- decls};

  inst_tdefs := create_type_map(norm_prg);
  
  desugared_fndefs := union({syn_fndef_to_fndefs(fd, {}) : fd <- fndefs});
  
  desugared_block_fndefs := union(
                              for (ub <- ublocks, fd <- set(ub.fn_defs), sgns = set(ub.signatures)) {
                                syn_fndef_to_fndefs(fd, sgns)
                              }
                            );

  return program(tdefs: inst_tdefs, fndefs: desugared_fndefs & desugared_block_fndefs);
}


FnDef* syn_fndef_to_fndefs(SynFnDef fndef, Signature* impl_env)
{
  lfns := {untyped_sgn(lfd) : lfd <- set(fndef.local_fns)};

  main_fn := mk_fndef(fndef, fndef.name, fndef.name, impl_env, lfns);
  
  loc_fns := for (fd <- set(fndef.local_fns)) {
               mk_fndef(fd, nested_fn_symbol(outer: fndef.name, inner: fd.name), fndef.name, impl_env, lfns)
             };
  
  return {main_fn} & loc_fns;

  //## BAD BAD BAD TOO MANY PARAMETERS
  FnDef mk_fndef(SynFnDef fndef, FnSymbol fn_name, FnSymbol outer_fn, Signature* impl_env, BasicUntypedSng* lfns) =
    fn_def(
      name:     fn_name,
      params:   fndef.params,
      res_type: fndef.res_type if fndef.res_type?,
      impl_env: impl_env,
               // No need to include fn_par(i) among the variables
      expr:     desugar_expr(fndef.expr, {p.var : p <- set(fndef.params) ; p.var?})
                where
                  closures      = {untyped_sgn(s) : s <- impl_env};
                  local_fns     = lfns;
                  curr_outer_fn = outer_fn;
    );
}
