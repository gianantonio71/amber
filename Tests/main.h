testcases x := main; end

//type Aaa = (<named_par(Atom)> => ExtExpr);
//untyped_sgns2(AAA nps) = nps;

//type ClsType  = cls_type(in_types: [Type+], out_type: Type);


main =
{
  //k  := :named_par(:typesymb2name);
  //it := :type_ref(:type_symbol(:typesymbol));
  //ot := :type_ref(:type_symbol(:string));
  //its := [it];
  //v  := cls_type(in_types: its, out_type: ot);
  //m  := (k => v);
  //
  //print k :: <named_par(Atom)>;
  //print it :: Type;
  //print ot :: Type;
  //print its :: [Type+];
  //
  //print v :: ExtExpr;
  //
  //print m :: (<named_par(Atom)> => ExtExpr);
  //print m :: <(<named_par(Atom)> => ExtExpr)>;
  //
  //print untyped_sgns(m);
  //return nil;


  count := _obj_("res\\decl_num.txt");
  print count;

  all_decls := [];

  for (idx : inc_seq(count))
    idx_str := to_str(idx);
    idx_str := "0" & idx_str if length(idx_str) == 1;
    fname   := "res\\decl_" & idx_str & ".txt";
    obj     := _obj_(fname);

    all_decls := [obj | all_decls];

    if (not obj :: PrgDecl)
      
      print fname;
      print obj;

      fail;
    ;
  ;

    
  syn_prg := :prg(all_decls);

  print "AST loaded";
  
  //print syn_prg;
  
  //errs := wf_errors(syn_prg);
  //print errs;
  ////return nil;
  
  //if (size(errs) > 1)
  //  return nil;
  //;

  prg := rem_syntax(syn_prg);
  print "Syntax removed";

  //assert prg_is_wf(prg);
  ////return nil;
  //print "Program is well-formed";

  
  //print prg;
  
  //print "Compiled to low-level representation";
    
  print "Starting code generation";
  
  code := gen_prg_code(prg);
  //print code;
  
  //return nil;
  
  print "Starting C code generation";
  
  ls := compile_to_c(code);
  
  print "We are at the end and all is well";
  
  //header := string{_file_("gencode\\header.cpp")};
  
  //print ls.header;
  //print ls.body;
  
  //null := _write_("generated.cpp", "#include \"lib.h\"\n\n");
  null := _write_("generated.cpp", "");
  for (l : ls.body)
    null := _append_("generated.cpp", l & "\n");
  ;
  
  null := _write_("generated.h", "");
  for (l : ls.header)
    null := _append_("generated.h", l & "\n");
  ;
  
  //print code;
  
  return nil;
};


////main =
////{
////  count := _obj_("res\\decl_num.txt");
////  print count;
////
////  ast_files := [];
////
////  for (idx : inc_seq(count))
////    idx_str := to_str(idx);
////    idx_str := "0" & idx_str if length(idx_str) = 1;
////    fname   := "res\\decl_" & idx_str & ".txt";
////    str     := string(_file_(fname));
////    ast_files := [str | ast_files];
////  ;
////  
////  c_code := compile(ast_files);
////  
////  null := _write_("generated.cpp", "#include \"lib.h\"\n\n");
////  for (l : c_code.body)
////    null := _append_("generated.cpp", l & "\n");
////  ;
////  
////  null := _write_("generated.h", "");
////  for (l : c_code.header)
////    null := _append_("generated.h", l & "\n");
////  ;
////
////  return nil;
////};
