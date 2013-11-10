testcases

  decl_count    := _obj_(:decl_num);
  all_decls_raw := [_obj_(:decl, i) : i <- inc_seq(decl_count)];
  syn_prg       := finish_parsing_job(all_decls_raw);
  errs          := user_errors(syn_prg);
  
  print union({if e.errs? then e.errs else {:more} end : e <- errs});
  print errs;

end
