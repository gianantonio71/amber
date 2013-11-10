String to_str(Int n, Int min_len)
{
  res := to_str(n);
  res := string{rep_seq(min_len-length(res), 48)} & res if length(res) < min_len;
  return res;
}


do_full_comp(_)
{
  decl_count := _obj_("res\\decl_num.txt");
  print decl_count;
  
  all_decls_raw := [_obj_("res\\decl_" & to_str(i, 2) & ".txt") : i <- inc_seq(decl_count)];
  
  print "AST loaded";
  
  syn_prg := finish_parsing_job(all_decls_raw);

  print "Parsing job finished";


  //print to_text(syn_prg, 60);
  //print syn_prg;
  //return true;
  
  errs := user_errors(syn_prg);
  
  if (errs /= {})
    print errs;
    return false;
  ;

  print "No well-formedness errors";
  
  prg := rem_syntax(syn_prg);
  print "Syntax removed";

  //print to_text(prg, 60);
  //print prg;
  //return true;

  assert is_well_formed(prg);

  print "Consistency check passed";
  
  code := gen_code(prg);

  print "Code generated";

  //print to_text(code, 60);
  //print code;
  //return true;

  ls := compile_to_c(code);

  print "C code generated";

  
  header := string{_file_("gencode\\header.cpp")};
  null := _write_("out.cpp", header);
  for (l : ls.body)
    null := _append_("out.cpp", l & "\n");
  ;
  
  null := _write_("out.h", "");
  for (l : ls.header)
    null := _append_("out.h", l & "\n");
  ;
  
  return true;
}


testcases

  do_full_comp(nil);

  //print set([]);
  //print set([9]);
  //print set([9, 2]);
  //print set([9, 2, 6]);
  //print set([9, 2, 6, 4]);
  //print set([9, 2, 6, 4, 5]);
  //print set([9, 2, 6, 4, 5, 3]);
  //print set([9, 2, 6, 4, 5, 3, 7]);
  //print set([9, 2, 6, 4, 5, 3, 7, 8]);
  //print set([9, 2, 6, 4, 5, 3, 7, 8, 1]);
  //print set([9, 2, 6, 4, 5, 3, 7, 8, 1, 10]);

end
