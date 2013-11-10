#define _CRT_SECURE_NO_WARNINGS

#include <cstring>
#include <cstdio>
#include <cstdlib>

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#include "lib.h"
#include "win32_interface.h"
#include "generated.h"



char *load_file(const char *fname, int &size)
{
  FILE *fp = fopen(fname, "r");
  int start = ftell(fp);                    assert(start == 0);
  fseek(fp, 0, SEEK_END);
  int end = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  int bsize = end - start;
  char *buff = new char[bsize+1];
  size = fread(buff, 1, bsize, fp);     assert(size <= bsize);
  buff[size] = '\0';
  fclose(fp);
  return buff;
}

char *load_text_file(const char *fname)
{
  int size;
  return load_file(fname, size);
}

///////////////////////////////////////////////////////////////////

void write_strings_to_file(Obj strings, const char *fname)
{
  const int BUFF_SIZE = 64 * 1024;
  
  char buffer[BUFF_SIZE];
  
  ofstream ofs(fname);
  
  int len = get_seq_len(strings);
  for (int i=0 ; i < len ; i++)
  {
    Obj str = at(strings, i);
    obj_to_str(str, buffer, BUFF_SIZE);
    ofs << buffer << "\n";
  }
}

///////////////////////////////////////////////////////////////////
/*
namespace generated
{
  bool memb_test__syntypedef(Obj);
  bool memb_test__prgdecl(Obj);
  bool memb_test__synprg(Obj);
}

void do_stuff()
{
  for (int i=0 ; i < 20 ; i++)
  {
    char fn[128];
    sprintf(fn, "res\\decl_%02d.txt", i);
    char *s = load_text_file(fn);
    //cout << s << endl << endl;
    
    Obj str_obj = str_to_obj(s);
    delete s;

    generated::Env env;
    memset(&env, 0, sizeof(generated::Env));

    Obj ts = generated::Tokenize(generated::Untag(str_obj, env), env);
    Obj pr = generated::Parse_Obj(ts, env);
    Obj obj = get_inner_obj(pr);
    
    //print(pr);
    //print(obj);
    
    //bool is_std = generated::memb_test__syntypedef(obj);
    bool is_pd = generated::memb_test__synprg(obj);
    
    cout << is_pd << endl;
    
    cout << "------------------------------" << endl;
    
    release(str_obj);
    release(ts);
    release(pr);
  }
    
  //Obj str_obj = str_to_obj(s);
  //Obj ts = fn_tokenize(fn_untag(str_obj));
  //Obj pres = fn_parse_obj(ts);
  //Obj prob_type = fn_untag(pres);
  //print(prob_type);
  //bool b = memb_test__tupletype(prob_type);
  //cout << (b ? "true" : "false") << endl;
  //return;
  
}
*/

void do_stuff()
{
  char *s = load_text_file("res\\decl_num.txt");
  int count = atoi(s);
  delete [] s;
  
  cout << "Number of files: " << count << endl;
  
  Obj ast_files = make_array(count, null_obj);
  for (int i=0 ; i < count ; i++)
  {
    char fname[256];
    sprintf(fname, "res\\decl_%02d.txt", i);
    //cerr << fname << endl;
    //cout << "\n\n  " << fname << "\n" << endl;
    
    s = load_text_file(fname);
    //cout << s << endl << endl;
    
    Obj str_obj = str_to_obj(s);
    delete s;
    
    //fn_main(get_inner_obj(str_obj));
    set_at(ast_files, i, str_obj);
        
    //release(str_obj);
    //release_all_cached_strings();

    //cerr << "Number of live objects: " << get_live_objs_count() << endl;
  }
  
  generated::Env env;
  memset(&env, 0, sizeof(generated::Env));
  
  Obj c_code = generated::Compile(ast_files, env);

  Obj header = lookup(c_code, generated::S_header);
  Obj body = lookup(c_code, generated::S_body);

  write_strings_to_file(header, "generated.h");
  write_strings_to_file(body, "generated.cpp");
  
  release(ast_files);
  release(c_code);
}

/*
namespace generated
{
  bool memb_test__seq(Obj par_0)
  {
    return par_0 == empty_seq || is_ne_seq(par_0);  
  }
}
*/
///////////////////////////////////////////////////////////////////

void main(char *, char **)
{
  //bool memb_test__type(Obj);
  //bool memb_test__tupletype(Obj);

  //char *s = load_text_file("out.txt");
  //Obj str_obj = str_to_obj(s);
  //Obj ts = fn_tokenize(fn_untag(str_obj));
  //Obj pres = fn_parse_obj(ts);
  //Obj prob_type = fn_untag(pres);
  //print(prob_type);
  //bool b = memb_test__tupletype(prob_type);
  //cout << (b ? "true" : "false") << endl;
  //return;
  
  int start_tick = get_tick_count();
  //fn_main(0);
  do_stuff();
  release_all_cached_strings();
  cerr << "Number of live objects: " << get_live_objs_count() << endl;
  //print_all_live_objs();
  cerr << "\nTime elapsed: " << get_tick_count() - start_tick << endl;
  getchar();
}






