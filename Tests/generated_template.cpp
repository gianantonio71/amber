#include "lib.h"

const Obj symb_true = 17;
const Obj symb_false = 33;
const Obj symb_string = 49;




const int EMB_SYMB_COUNT = 3;




const char *map_symb_to_str[EMB_SYMB_COUNT] = {
  "true",
  "false",
  "string",
};




struct Env {
  Obj (*n1_p)(Obj *C, Obj p0);
  const Obj *C1_p;
};




Obj cls_0(const Obj *, Obj);




Obj Foo(Obj);
Obj Bar(Obj, Obj);








Obj cls_0(const Obj C[], Obj p0)
{
  Obj l1;
  int i0;
  Obj v_w;
  Obj v_z;
  Obj V0[2];

  v_z = p0;
  v_w = C[0];
  i0 = 0;
  V0[i0] = v_w;
  add_ref(V0[i0]);
  i0 = i0 + 1;
  V0[i0] = v_z;
  add_ref(V0[i0]);
  i0 = i0 + 1;
  l1 = make_seq(V0, i0);
  return l1;
}






Obj Foo(Env &env, Obj p0)
{
  Obj v_x;
  Obj l0;
  Obj n_p;

  v_x = p0;
  l0 = env.n1_p(env.C1_p, v_x);
  return l0;
}


Obj Bar(Env &env, Obj p0, Obj p1)
{
  Obj v_x;
  Obj l0;
  Obj v_w;
  Obj n_p;

  v_x = p0;
  v_w = p1;
  
  Obj (*BFXXX)(const Obj[], Obj) = env.n1_p;
  Obj *BDXXX = env.C1_p;

  Obj NCXXX[1];
  NCXXX[0] = v_w;
  
  env.n1_p = cls_0;
  env.C1_p = NCXXX;
  
  l0 = Foo(env, v_x);

  env.n1_p = BFXXX;
  env.C1_p = BDXXX;
  
  return l0;
  
  

  Obj (*n1_p)(Obj *C, Obj p0);
  const Obj *C1_p;


  
  Obj (*IK0)(const Obj *, Obj) = IMP_p_1;
  IMP_p_1 = IMP_p_1__0;
  Obj EK0[1];
  for (int i=0 ; i < 1 ; i++)
    EK0[i] = ENV_p_1[i];
  ENV_p_1[0] = v_w;
  l0 = Foo(v_x);
  IMP_p_1 = IK0;
  for (int i=0 ; i < 1 ; i++)
    ENV_p_1[i] = EK0[i];
  return l0;
}


