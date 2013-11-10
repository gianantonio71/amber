type Tautology = true;


Tautology prg_is_wf(Program prg) = types_are_wf(prg.tdefs)   and
                                   fndefs_are_wf(prg.fndefs) where typedefs = prg.tdefs;;



using
  typedefs -> (TypeSymbol => Type);

def

  Tautology fndefs_are_wf(FnDef* fndefs)
  {
    sgns        := {untyped_sgn(fd) : fd <- fndefs};
    //## BAD BAD BAD INEFFICIENT
    grouped_fns := {{fd : fd <- fndefs ; untyped_sgn(fd) = s} : s <- sgns};
    return false if (? g <- grouped_fns : not are_compatible(g));
    return not (? fd <- fndefs : not fndef_is_wf(fd, sgns));
  }
  
  Tautology are_compatible(FnDef* fndefs)
  {
    //## BAD BAD BAD INEFFICIENT
    return not (? fd1 <- fndefs, fd2 <- fndefs : fd1 /= fd2, not are_comp(fd1, fd2));
    
    Tautology are_comp(FnDef fd1, FnDef fd2)
    {
      assert arity(fd1) = arity(fd2);
      
      for (p1, i : fd1.params)
        p2 := fd2.params[i];
        return true if p1.type? and p2.type? and are_compatible(p1.type, p2.type, typedefs);
      ;
      
      return false;
    }
  }


  Tautology fndef_is_wf(FnDef fndef, UntypedSng* global_fns)
  {
    //## BAD BAD BAD THIS IS CHEATING...
    tvars := select TypeVar in fndef.params end;
    for (p : fndef.params)
      return false if p.type? and not type_is_wf(p.type, typedefs, tvars);
    ;
    
    //## BUG BUG BUG THIS IS ALL WRONG...
    res_tvars := tvars & select TypeVar in {s.res_type : s <- fndef.impl_env} end;
    return false if fndef.res_type? and not type_is_wf(fndef.res_type, typedefs, res_tvars);
    
    return false if has_duplicates([p.var : p <- fndef.params, p.var?]);
    
    return false if (? s <- fndef.impl_env : not sgn_is_wf(s));
    
    return false if (? s1 <- fndef.impl_env, s2 <- fndef.impl_env :
                                      s1 /= s2, untyped_sgn(s1) = untyped_sgn(s2));

    return expr_is_wf(fndef.expr, param_vars(fndef))
           where
             type_vars    = tvars;
             fns_in_scope	= global_fns;
             impl_params  = {untyped_sgn(s) : s <- fndef.impl_env};
           ;
  }
  
  Tautology sgn_is_wf(Signature sgn)
  {
    tvars := select TypeVar in sgn.params end; //## BAD BAD BAD CHEATING
    return false if not all([type_is_wf(t, typedefs, tvars) : t <- sgn.params]);
    return type_is_wf(sgn.res_type, typedefs, tvars);
  }

end


Var* param_vars(FnDef fn_def) = {p.var : p <- set(fn_def.params) ; p.var?} &
                                set([:fn_par(i) : i <- inc_seq(arity(fn_def))]); //## BAD BAD BAD
