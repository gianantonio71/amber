type Bool           = true, false;

type Nat            = [0..*];
type Int            = [*..*];
type NzNat          = [1..*];
//type NzInt          = [1..*], [*..-1];
type NegInt         = [*..-1] ;

//type Rat            = Int, rat(num: Int, den: [2..*]);

type Any            = <*>;
type Atom           = <_>;

//type Point          = point(x: Rat, y: Rat);

//type BinTree[T]     = leaf, bin_tree(value: T, left: BinTree[T], right: BinTree[T]);
//type BinTree        = BinTree[Any];

type Set            = {Any*};
type NeSet          = {Any+};

type Seq            = [Any*];
type NeSeq          = [Any+];

type Char           = char(Nat);
type String         = string([Nat*]);

////////////////////////////////////////////////////////////////////////////////

type SeqLookalike     = empty_seq, seq(Any+);
type StringLookalike  = string(Any);


////////////////////////////////////////////////////////////////////////////////

//// Still not ideal, both of them. No need to always evaluate all arguments.
//Bool some(Bool+ bs) = {? true <- bs};
//Bool all(Bool+ bs)  = not {? false <- bs};

// No element is false
Bool all([Bool*] s)   = not in(false, s);

//// No element is true
//Bool none([Bool*] s)  = not in(true, s);
//
//// At least one element is true
//Bool at_least_one([Bool*] s)  = in(true, s);
//
//// At least one element is false
//Bool not_all([Bool+] s) = in(true, s);

////////////////////////////////////////////////////////////////////////////////

Int op_-(Int n)         = _neg_(n);
Int op_+(Int a, Int b)  = _add_(a, b);

Int op_-(Int a, Int b) = a + -b;

Int op_*(Int a, Int (b)):
  0       = 0,
  NzNat   = (a-1) * b + b,
  NegInt  = -(-a * b)
;

Bool op_<(Int a, Int b):
  0, [1..*]  = true,
  0, _       = false,
  _, _       = 0 < b - a
;

Bool op_>(Int a, Int b) = b < a;
Bool op_>=(Int a, Int b) = a > b or a = b;
Bool op_<=(Int a, Int b) = a < b or a = b;

Int min(Int a, Int b) = if a < b then a else b end;
Int max(Int a, Int b) = if a > b then a else b end;

////////////////////////////////////////////////////////////////////////////////

// Should it be defined for empty sequences (and negative integers)
// as well? It's always going to fail...

//T op_[]([T+], Nat n):
//  [f | r], 0       = f,
//  [f | r], [1..*]  = r[n-1]
//;

T op_[]([T+] seq, Nat idx)
{
  s := seq;
  n := idx;
  while (s /= [])
    return s.head if n = 0;
    s := s.tail;
    n := n - 1;
  ;  
  assert false; //## BAD
  return nil;   //## BAD
}


//Nat length(Seq):
//  []      = 0,
//  [_ | r] = 1 + length(r)
//;

Nat length(Seq seq)
{
  s := seq;
  l := 0;
  while (s /= [])
    l := l + 1;
    s := s.tail;
  ;
  return l;
}

T1 left([T1, T2] s)  = s.head;
T2 right([T1, T2] s) = s.tail.head;

//[T*] op_&([T*], ([T*] s)):
//  []      = s,
//  [f | r] = [f | r & s]
//;

//Seq op_&(Seq s1, Seq s2)
op_&(SeqLookalike s1, SeqLookalike s2)
{
  rs1 := reverse(s1);
  s   := s2;

  while (rs1 /= [])
    s   := [rs1.head | s];
    rs1 := rs1.tail;
  ;
  
  return s;   
}

//Bool in(Any e, Seq):
//  _, []       = false,
//  _, [f | r]  = e = f or in(e, r)
//;

Bool in(Any e, Seq s)
{
  for (x : s)
    return true if x = e;
  ;
  return false;
}

//Nat first_index(Any e, Seq):
//  _, [f | r] = if e = f then 0 else first_index(e, r) + 1;
//;

Nat first_index(Any e, Seq s)
{
  for (x, i : s)
    return i if x = e;
  ;
  assert false; //## BAD
  return nil;   //## BAD
}

[T*] join([[T*]*] seqs)
{
  ss  := seqs;
  res := [];
  //for (s : seqs)
  //  res := res & s;
  //;
  while (ss /= [])
    res := res & ss.head;
    ss  := ss.tail;
  ;
  return res;
}

//[T*] reverse([T*] s):
//  []       = s,
//  [f | r]  = reverse(r) & [f]
//;

//[T*] reverse([T*] seq)
reverse(SeqLookalike seq)
{
  s  := seq;
  rs := [];
  while (s /= [])
    rs := [s.head | rs];
    s := s.tail;
  ;
  return rs;
}

//[T*] subseq([T*], Nat n, Nat m):
//  _,        0,       0       = [],
//  [f | r],  0,       [1..*]  = [f | subseq(r, 0, m-1)],
//  [f | r],  [1..*],  _       = subseq(r, n-1, m)
//;

[T*] subseq([T*] seq, Nat first, Nat count)
{
  s := seq;
  n := first;
  m := count;
  
  while (n > 0)
    s := s.tail;
    n := n - 1;
  ;
  
  ss := [];
  
  while (m > 0)
    ss := [s.head | ss];
    s  := s.tail;
    m  := m - 1;
  ;
  
  return reverse(ss);
}

[T*] subseq([T*] s, <nil>, Nat m, Nat r) = subseq(s, length(s)-m-r, m);
[T*] subseq([T*] s, Nat l, <nil>, Nat r) = subseq(s, l, length(s)-l-r); 
[T*] subseq([T*] s, Nat l, Nat m, <nil>) = subseq(s, l, m);

[T*] rep_seq(Nat size, T value)
{
  s := [];
  n := size;
  while (n > 0)
    s := [value | s];
    n := n - 1;
  ;
  return s;
}
//[Nat*] inc_seq(Nat n) = reverse(dec_seq(n));
[Nat*] inc_seq(Nat n)
{
  i := n-1;
  s := [];
  
  while (i >= 0)
    s := [i | s];
    i := i - 1;
  ;
  
  return s;  
}

[Nat*] dec_seq(Nat n) = if n = 0 then [] else [n - 1 | dec_seq(n-1)];;





//using [T]
//  op_<(T, T) -> Bool;
//
//def
//  [T*] sort_set(T* s) = sort(rand_sort(s));
//  
//  [T*] sort([T*] s) = mergesort(s);
//  
//  [T*] quicksort([T*] s) = quicksort(s, false);
//  
//  [T*] quicksort([T*], Bool (no_dups)):
//    []       = [],
//    [e]      = [e],
//    [p | r]  = do
//                 head := [e : e <- r, e < p and (not no_dups or e /= p)];
//                 tail := [e : e <- r, not(e < p) and (not no_dups or e /= p)];
//
//                 return quicksort(head, no_dups) & [p] & quicksort(tail, no_dups);
//               ;
//  ;
//
//  [T*] mergesort([T*] s)
//  {
//    return rec_merge(split(s));
//
//    [T*] rec_merge([[T*]*] s):
//      []   = [],
//      [a]  = a,
//      _    = rec_merge(merge(s))
//    ;
//
//    [[T*]*] merge([[T*]*]):
//      []          = [],
//      [a]         = [a],
//      [a, b | r]  = [merge(a, b) | merge(r)]
//    ;
//
//    [T*] merge([T*] s1, [T*] s2):
//      [],       _       = s2,
//      _,       []       = s1,
//      [a | r], [b | s]  = if a < b then [a | merge(r, [b | s])]
//                                   else [b | merge([a | r], s)];
//    ;
//
//    [[T*]*] split([T*]):
//      []          = [],
//      [a]         = [[a]],
//      [a, b]      = [sort_pair(a, b)],
//      [a, b | r]  = [sort_pair(a, b) | split(r)]
//    ;
//
//    [T*] sort_pair(T a, T b) = if a < b then [a, b] else [b, a];;
//  }
//end

/////////////////////////////////////////////////////////////////////////////////////////

Bool in(Any e, Set s) = {? !e <- s};

//[T1, T2]* cart_prod(T1* s1, T2* s2)  = {[e1, e2] : e1 <- s1, e2 <- s2};
//
////Set cart_prod([{T*}+] ss) = {[e1a, e1b, e2] : [e1a, e1b] <- s1 /\ e2 <- s2};

T* union(T* s1, T* s2)         = {e : e <- s1 \/ e <- s2};
T* intersection(T* s1, T* s2)  = {e : e <- s1, e <- s2};
T* difference(T* s1, T* s2)    = {e : e <- s1, e </- s2};

T* op_&(T* s1, T* s2) = union(s1, s2);
T* op_-(T* s1, T* s2) = difference(s1, s2);

Bool disjoint(Set s1, Set s2)     = intersection(s1, s2) = {};
Bool subset(Set s1, Set s2)       = s1 - s2 = {};
//
//T* union(T**):
//  {}         = {},
//  {s}        = s,
//  {s1 | s2}  = union(s1) & union(s2)
//;
//
//Nat size(Any*):
//  {}         = 0,
//  {e}        = 1,
//  {s1 | s2}  = size(s1) + size(s2)
//;
//
//Bool is_singleton(Any* s) = size(s) = 1;

T only_element(T*):  {e} = e;

//T only_element(T*, T (default)):
//  {e}  = e,
//  _    = default
//;
//
//T only_element_or_def_if_empty(T*, T (default)):
//  {e}  = e,
//  {}   = default
//;
//
///////////////////////////////////////////////////////////////////////////////////////////
//
//Nat instances(Any e, [Any -> NzNat] m) = only_element_or_def_if_empty({n : [!e, n] <- m}, 0);
//
////Nat instances((Any e), [Any -> NzNat]):
////  [e -> n, ...]  = n,
////  _              = 0
////;
//
//[T -> NzNat] op_&([T -> NzNat] ms1, [T -> NzNat] ms2) = [e -> n :
//                                                                ([e, m] <- ms1, n = m + instances(e, ms2)) \/
//                                                                ([e, n] <- ms2, [e, _] </- ms1)
//                                                        ];
//
//[T -> NzNat] op_-([T -> NzNat] ms1, [T -> NzNat] ms2) = [e -> n : [e, m] <- ms1,
//                                                                  n = m - instances(e, ms2);
//                                                                  n > 0
//                                                        ];
//
////[T -> NzNat] multiset_union([T -> NzNat]*):
////  {}         = [->],
////  {s}        = s,
////  {s1 | s2}  = multiset_union(s1) & multiset_union(s2)
////;
//
//using [T1, T2]
//  f(T1) -> T2;
//
//def
//  [T2 -> NzNat] apply(T1* s):
//    {}         = [->],
//    {e}        = [f(e) -> 1],
//    {s1 | s2}  = apply(s1) & apply(s2)
//  ;
//end
//
//
//T* seq_union([{T*}*] sets) = union(set(sets));
//
///////////////////////////////////////////////////////////////////////////////////////////

T2 op_[]([T1 -> T2] map, T1 key) = only_element({val : [!key, val] <- map});

//T2 lookup([T1 -> T2] map, T1 key, T2 default) = only_element_or_def_if_empty({val : [!key, val] <- map}, default);
//
//[T1 -> T2] update([T1 -> T2] map, [T1 -> T2] diffs) = [k -> v : ([k, v] <- map, [k, _] </- diffs.*) \/
//                                                                 [k, v] <- diffs];
//
//T1* keys([T1 -> T2] map) = {k : [k, _] <- map};
//
//Bool has_key([T1 -> T2] map, T1 key) = {? [!key, _] <- map};
//
//[T1 -> T2] merge([T1 -> T2] map1, [T1 -> T2] map2)
//{
//  assert {
//    ks1 := keys(map1);
//    ks2 := keys(map2);
//    
//    disj  := disjoint(ks1, ks2);
//    
//    if (not disj)
//      print intersection(ks1, ks2);;
//    
//    return disj;
//  };
//
//  return map{e : e <- map1 \/ e <- map2}; // BIT UGLY... 
//}
//
//[T1 -> T2] merge([T1 -> T2]* maps):
//  {}          = [->],
//  {m}         = m,
//  {ms1 | ms2} = merge(merge(ms1), merge(ms2))
//;
//
//[T2 -> {T1+}] reverse([T1 -> {T2+}] map)
//{
//  // HOW TO MAKE THIS EFFICIENT?
//  vs := union({v : [k, v] <- map});
//  return [v -> {k : [k, s] <- map ; in(v, s)} : v <- vs];
//}
//
///////////////////////////////////////////////////////////////////////////////////////////
//
////T* set([T*] s):
////  []       = {},
////  [f | r]  = {f} & set(r)
////;

T* set([T*] seq)
{
  s := seq;
  r := {};
  while (s /= [])
    r := r & {s.head};
    s := s.tail;
  ;
  return r;
}

////## IMPLEMENT A seq_to_multiset FUNCTION AND SEE IF IT CAN BE USED TO IMPLEMENT dupl_elements efficiently
//
////## THIS IS DIFFICULT TO IMPLEMENT EFFICIENTLY WITHOUT ACCESS TO THE INTERNAL COMPARISON OPERATOR  
//T* dupl_elems([T*] s)
//{
//  r := {};
//  for (e1, i1 : s ; e2, i2 : s)
//    r := r & {e1} if (e1 = e2 and i1 /= i2);;
//  return r;
//}
//
//Bool has_duplicates([Any*] s) = dupl_elems(s) /= {};

[T*] rand_sort(T*):
  {}         = [],
  {e}        = [e],
  {s1 | s2}  = rand_sort(s1) & rand_sort(s2);

//T rand_elem(T+ s) = rand_sort(s).head;
//
//[T -> NzNat] set_to_mset(T* s) = [e -> 1 : e <- s];
//
//[T -> NzNat] multiset_union(T** s) = union({set_to_mset(e) : e <- s});
//
///////////////////////////////////////////////////////////////////////////////////////////
//
//T2* values([T1 -> T2] map) = {v : [_, v] <- map};

unwrap(x) = only_element(x.*);

////## THERE'S A BUG HERE, PROBABLY WHEN ONE OF THE SET OF TARGETS IS EMPTY
//[T -> {T*}] transitive_closure([T -> {T*}] map)
//{
//  assert {
//    all_starts := keys(map);
//    all_refs   := union(values(map));
//    
//    missing := all_refs - all_starts;
//    
//    return true if missing = {};
//    print :mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm;
//    print missing;
//    return false;
//  };
//  
//  closure := map;
//
//  loop
//    new_closure := [n -> next_step(rs, closure) : [n, rs] <- closure];
//    
//    if (new_closure = closure)
//      return closure;;
//    
//    closure := new_closure;
//  ;
//
//  next_step(rs, map) = rs & union({map[r] : r <- rs});
//}
//
///////////////////////////////////////////////////////////////////////////////////////////
//
//using
//  condition(Any) -> Bool;
//  eval(Any)      -> Any;
//
//def
//
//  Any* select_expr_fn(Any obj)
//  {
//    return {eval(obj)} if condition(obj);
//    
//    return try (obj)
//             Atom      = {},
//             Int       = {}, //## BAD
//             {}        = {}, //## BAD
//             {x}       = select_expr_fn(x),
//             Set       = union({select_expr_fn(x) : x <- obj});
//             //(_ ^ s)   = union({select_expr_fn(x) : x <- s});
//           ;
//  }
//
//  Any* replace_expr_fn(Any obj)
//  {
//    return eval(obj) if condition(obj);
//    
//    return try (obj)
//             Atom       = obj,
//             Int        = obj, //## BAD
//             {}         = obj, //## BAD
//             {x}        = {replace_expr_fn(x)},
//             Set        = {replace_expr_fn(x) : x <- obj};
//             //(root ^ s) = root @ {replace_expr_fn(x) : x <- s};
//           ;
//  }
//
//end
//  
//
//using
//  condition(Any) -> Bool;
//  eval(Any)      -> Any;
//
//def
//
//  [Any*] seq_comp_fn([Any*] seq)
//  {
//    res := [];
//    for (x : reverse(seq))
//      rev_out := [eval(x) | res] if condition(x);
//    ;
//    return res;
//  }
//  
//end
//
//
//using
//  condition(Any, Nat) -> Bool;
//  eval(Any, Nat)      -> Any;
//
//def
//
//  [Any*] seq_comp_with_idx_fn([Any*] seq)
//  {
//    res := [];
//    for (x, i : reverse(seq))
//      rev_out := [eval(x, i) | res] if condition(x, i);
//    ;
//    return res;
//  }
//  
//end


[T*] intermix([T*] seq, T obj)
{
  res := [];  
  for (x : reverse(seq))
    res := [obj | res] if res /= [];
    res := [x | res];
  ;
  return res;
}


String to_str(Int n) //## BUG BUG BUG, DOESN'T HANDLE NEGATIVE NUMBERS
{
  div  := 10;
  divs := [1];
  while (div <= n)
    divs := [div | divs];
    div  := 10 * div;
  ;
  
  str := "";

  m := n;  
  for (d : divs)
    count := 0;
    while (m >= d)
      m     := m - d;
      count := count + 1;
    ;
    str := str & string{[48 + count]}; //## UGLY UGLY
  ;

  return str;
}

///////////////////////////////////////////////////////////////////////////////

T rev_at([T*] seq, Nat idx)
{
  rev_seq := reverse(seq);
  return rev_seq[idx];
}

Int to_int(String str)
{
  assert length(str) > 0;
  
  res := 0;
  for (ch : unwrap(str))
    code := ch - 48;
    assert code >= 0 and code <= 9;
    res := 10 * res + code;
  ;

  return res;
}


///////////////////////////////////////////////////////////////////////////////

//String to_text(Any obj) = to_text(obj, :any_len);


String to_text(Any obj, <Nat, any_len> line_len)
{
  lines := to_lines(obj, line_len);
  return append(intermix(lines, "\n"));

  [String+] to_lines(Any obj, <Nat, any_len> (line_len)):
    Atom    = [_str_(obj)],
    Int     = [to_str(obj)],
    String  = ["\"" & quote(obj) & "\""],
    Seq     = to_lines(obj, line_len, "[", "]"),
    Set     = to_lines(rand_sort(obj), line_len, "{", "}"),
    r @ s   = to_lines(rand_sort(s), line_len, _str_(r) & "(", ")");

  [String+] to_lines(Seq objs, <Nat, any_len> line_len, String first_line, String last_line)
  {
    subobjs := [to_lines(x, line_len) : x <- objs];
    if (all([length(so) = 1 : so <- subobjs]))
      str := first_line & append(intermix(join(subobjs), ", ")) & last_line;
      return [str] if line_len = :any_len or length(str) <= line_len;
    ;
    subobjs := [["  " & l & if j = length(ls)-1 and i < length(subobjs)-1 then "," else "" end : l, j <- ls] : ls, i <- subobjs];
    return [first_line] & join(subobjs) & [last_line];
  }

  quote(str)
  {
    qr_str := [];
    for (ch : unwrap(str))
      if (ch = 10)   // '\n'
        qr_str := [110, 92 | qr_str];
      elif (ch = 92) // '\\'
        qr_str := [92, 92 | qr_str];
      elif (ch = 34) // '\"'
        qr_str := [34, 92 | qr_str];
      else
        qr_str := [ch | qr_str];
      ;
    ;
    return string(reverse(qr_str));
  }
}


//String to_text(Any obj)
to_text(obj)
{
  return to_text(obj, "");

  //String to_text(Any obj, String (out_channel)):
  to_text(obj, (out_channel)):
    Atom    = _str_(obj) & out_channel,
    Int     = to_str(obj) & out_channel,
    String  = "\"" & (quote(obj) & ("\"" & out_channel)),
    Seq     = add_to_channel(reverse(obj), out_channel, "[", "]"),
    Set     = add_to_channel(rand_sort(obj), out_channel, "{", "}"),
    r @ s   = add_to_channel(rand_sort(s), out_channel, _str_(r) & "(", ")");
  
  //String add_to_channel(Seq objs, String out_channel, String header, String footer)
  add_to_channel(objs, out_channel, header, footer)
  {
    last := length(objs) - 1;
    ch   := footer & out_channel;
    for (o, i : objs)
      ch := to_text(o, ch);
      ch := ", " & ch if i < last;
    ;
    return header & ch;
  }

  quote(str)
  {
    qr_str := [];
    for (ch : unwrap(str))
      if (ch = 10)   // '\n'
        qr_str := [110, 92 | qr_str];
      elif (ch = 92) // '\\'
        qr_str := [92, 92 | qr_str];
      elif (ch = 34) // '\"'
        qr_str := [34, 92 | qr_str];
      else
        qr_str := [ch | qr_str];
      ;
    ;
    return string(reverse(qr_str));
  }
}


///////////////////////////////////////////////////////////////////////////////

//String string([Int*] chars) = string{chars};
//
//Nat length(String s)        = length(unwrap(s));
//Nat op_[](String s, Nat n)  = op_[](unwrap(s), n);
//
//String op_&(String s1, String s2)     = string(unwrap(s1) & unwrap(s2));// cat(s1, s2); 
//String append([String*] ss)           = string(join([unwrap(s) : s <- ss]));
//String reverse(String s)              = string(reverse(unwrap(s)));
//String subseq(String s, Nat n, Nat m) = string(subseq(unwrap(s), n, m));

string(SeqLookalike chars) = string{chars};

length(StringLookalike s)                     = length(unwrap(s));
op_[](StringLookalike s, Nat n)               = op_[](unwrap(s), n);

op_&(StringLookalike s1, StringLookalike s2)  = string(unwrap(s1) & unwrap(s2));// cat(s1, s2); 
append([StringLookalike*] ss)                 = string(join([unwrap(s) : s <- ss]));
reverse(StringLookalike s)                    = string(reverse(unwrap(s)));
subseq(StringLookalike s, Nat n, Nat m)       = string(subseq(unwrap(s), n, m));

//String cat(s1, s2)
//{
//  rs1 := unwrap(s1);
//  rs2 := unwrap(s2);
//  
//  rs := rs1 & rs2;
//  s  := string{rs};
//  
//  return s;
//}
