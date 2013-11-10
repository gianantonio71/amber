type Int = [*..*];

Int id(Int x) = x;



//using [*..*] y, [*..*] z
//{
//  f(x)
//  {
//    return x if y == 2;
//    let (y = _add_(y, 1), z = _add_(z, 1))
//      r := f(x);
//    ;
//    return r;
//  }
//}


//using <*> y
//{
//  f(x)
//  {
//    return g(x; y = _add_(y, 1));
//  
//    g(z) = z;
//  }
//}


  //(code: [Instr*], vect_var: VecVar, count_var: IntVar)
  //gen_vector_eval_info([SubExpr*] exprs)
  //{
  //  elems_var := vvar(next_vector_var_id, length(exprs));
  //  count_var := ivar(next_int_var_id);
  //  
  //  code := gen_vector_eval_code(
  //            exprs,
  //            elems_var,
  //            count_var;
  //            next_vector_var_id = next_vector_var_id + 1,
  //            next_int_var_id    = next_int_var_id + 1
  //          );
  //  
  //  return (code: code, vect_var: elems_var, count_var: count_var);


  //  [Instr*] gen_vector_eval_code([SubExpr*] exprs, VecVar elems_var, IntVar count_var)
  //  {
  //    curr_slot_var := evar(elems_var.id, count_var);


//f = [[0, 1]];

//type Int = [*..*];
//type Point = point(x: Int, y: Int);

//Point make_point(Int x, Int y) = point(x: x, y: y);
//
//<*> main =
//{
//  p := make_point(2, 5);
//  print p;
//  return 0;
//};
//
//using <*> p
//{
//  foo_0(x) = p;
//}
//
//bar_0(x, w) = foo_0(x; p = w);
//
//barbar_0(x)
//{
//  w := [0];
//  let (p = w)
//    w := p;
//  ;
//  return w;
//}
//
//foo2(x)
//{
//  w := [0];
//  let (p(z) = [w, z])
//    w := p(w);
//  ;
//  return w;
//}
//
//using <*> p(<*>)
//{
//  foo(x) = p(x);
//}
//
////bar(x, w) = foo(x; p(z) = [w, z]);
//
//bar(x)
//{
//  y := [0];
//  y := foo(x; p(z) = [y, z]);
//  return y;
//}
//
//barbar(x)
//{
//  y := [0];
//  y := foo(x, y);
//  z := [1];
//  z := z;
//  return y;
//}



//cls_call(name: fn_symbol(p), params: [])
// named_var(p)

//type AtomToIntMap = (<+> => [*..*]);

//f(AtomToIntMap m) = m;
//f(<(<+> => [*..*])> m) = m;
//f(<[*..*]> m) = m;
//
//testcases
//  m := (:a => 0);
//  print f(m);
//end

//T* intersection(T* s1, T* s2)  = {e : e <- s1, e <- s2};

//using <[*..*]> m
//{
//  f(n) = _add_(n, m);
//}
//
//g(n)
//{
//  let (m = 2)
//    h := f(n);
//  ;
//  return h;
//}

//testcases
//  print g(4);
//end

//testcases x := main; end
//
//using [0..*] y//, [*..*] z
//{
//  //g(x) = _add_(x, _add_(y, z));
//  
//  //f(x) = g(x);
//  f(x) = _add_(x, y);
//}
//
//main =
//{
//  v := 2500;
//
//  let (y = v)
//    print f(1);
//  ;
//    
//  //let (y = _add_(v, 30), z = v)
//  //  print f(1);
//  //;
//  
//  //print g(10) where cond = true;;
//  //print g(100) where cond = false;;
//
//  //let (y = 1)
//  //  print g(10; z = 1000);
//  //  let (z = 2000)
//  //    print g(100; y = _add_(y, 5), z = 3000);
//  //  ;
//  //;
//
//  ////print 5 = 10;
//  //print 5 == 10;
//
//  //x := 205379;
//  //
//  //print x;
//  
//  return nil;
//};




//p(b) = not b;


//using cond -> <true, false>; def
  //f(x) = if cond then x else nil end;
  //
  //g(x) = f(x) where cond = p(cond);;
//end






//main(s)
//{
//  ts  := tokenize(s);
//  fts := fast_tokenize(s);
//  
//  if (ts = fts)
//    print "OK";
//  else
//    print "Error!";
//  ;
//  
//  obj := parse_obj(ts);
//  ps  := to_text(obj);
//  
//  print obj;
//  print ps;
//
//  return nil;
//}

// 536 seconds - 68 seconds compiler release

//main = {
//
//  count := _obj_("res\\decl_num.txt");
//  print count;
//
//  for (idx : inc_seq(count))
//    idx_str := to_str(idx);
//    idx_str := "0" & idx_str if length(idx_str) = 1;
//    fname   := "res\\decl_" & idx_str & ".txt";
//    bytes   := _file_(fname);
//    null    := main(bytes);
//    //text    := string(_file_(fname));
//    //null    := main(text);
//  ;
//
//  return nil;
//};
//
//testcases
//  x := main;
//end




//testcases
//
//  print _list_to_seq_([]);
//  print _list_to_seq_([0, []]);
//  print _list_to_seq_([1, [0, []]]);
//  print _list_to_seq_([2, [1, [0, []]]]);
//  print _list_to_seq_([3, [2, [1, [0, []]]]]);
//
//end
