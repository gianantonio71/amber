
PrgDecl parse_prg_decl(String str)
{
  ts  := fast_tokenize(untag(str));
  obj := parse_obj(ts);
  return untag(obj);
}

CCodeOutput compile([String*] ast_files)
{
  print "AST files loaded";
  syn_prg := :prg([parse_prg_decl(f) : f <- ast_files]);
  print "AST files parsed";
  errs    := wf_errors(syn_prg);
  print errs;
  prg     := rem_syntax(syn_prg);
  print "Syntax removed";
  code    := gen_prg_code(prg);
  print "Code generated";
  c_code  := compile_to_c(code);
  print "C code generated";
  return c_code;  
}

