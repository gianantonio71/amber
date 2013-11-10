testcases

  decl_count    := _obj_(:decl_num);
  all_decls_raw := [_obj_(:decl, i) : i <- inc_seq(decl_count)];
  syn_prg       := finish_parsing_job(all_decls_raw);
  errs          := user_errors(syn_prg);
  prg           := rem_syntax(syn_prg);

  errs = {};
  is_well_formed(prg);

  print prg;

end