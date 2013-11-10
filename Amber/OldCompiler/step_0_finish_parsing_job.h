
type ObjsToReplace = //seq_type(SynType),
                     //ne_seq_type(SynType),
                     //fixed_seq_type([SynType+]),
                     //map_type(key: SynType, value: SynType),
                     //ne_map_type(key: SynType, value: SynType),
                     wrapped_ptrn_as_type(SynPtrn),

                     seq_ptrn(type: SynType, nonempty: Bool),
                     fixed_seq_ptrn(ptrns: [SynPtrn+], tail_ptrn: SynPtrn?),
                     map_ptrn(key_type: SynType, value_type: SynType, nonempty: Bool),
                     
                     map_lookup_ptrn(entries: [(key: SynPtrn, value: SynPtrn)+]);


SynPrg finish_parsing_job([Any*] unfinished_ast)
{
  ast := replace not_matched(p) in unfinished_ast with p end;

  loop
    ast := replace ObjsToReplace obj in ast with replace_obj(obj) end;
  while (select ObjsToReplace in ast end /= {});
  
  return :prg([implicit_seq_type] & ast);
}


Any replace_obj(ObjsToReplace obj):
  //seq_type(t)                      = mk_seq_type_ref(t),
  //ne_seq_type(t)                   = mk_ne_seq_type(t),
  //fixed_seq_type(ts)               = mk_fixed_seq_type(ts),
  //map_type(key: t1, value: t2)     = mk_map_type(t1, t2, false),
  //ne_map_type(key: t1, value: t2)  = mk_map_type(t1, t2, true),
  wrapped_ptrn_as_type(p)          = mk_type_from_ptrn(p),

  map_lookup_ptrn(entries: es)     = mk_map_lookup_ptrn(es),
  seq_ptrn(type: t, nonempty: ne)  = :ptrn_type(if ne then :ne_seq_type(t) else seq_type(t) end),

  fixed_seq_ptrn(ptrns: ps)                = mk_fixed_seq_ptrn(ps),
  fixed_seq_ptrn(ptrns: ps, tail_ptrn: tp) = mk_seq_ptrn(ps, tp),

  map_ptrn(key_type: kt, value_type: vt, nonempty: ne) = mk_map_ptrn(kt, vt, ne);












mk_seq_type_ref(t) = :type_ref(par_type_symbol(symbol: :impl_seq_type, params: [t]));

//## NOT GOOD...
SynParTypedef implicit_seq_type = {
  left_type  := wrap_pseudo_type(:head, :type_var(:t));
  right_type := wrap_pseudo_type(:tail, :type_ref(par_type_symbol(symbol: :impl_seq_type, params: [:type_var(:t)])));
  
  ground_term := :singleton(:symbol(:empty_seq));
  rec_term    := wrap_pseudo_types(:seq, [left_type, right_type]);

  impl_seq_type := :union_type([ground_term, rec_term]);
  
  return par_typedef(name: :impl_seq_type, params: [:type_var(:t)], type: impl_seq_type);

};

wrap_pseudo_type(Atom root, in_type) = wrap_pseudo_types(root, [in_type]);

wrap_pseudo_types(Atom root, [Any+] types) = term_type(
                                               root: :symbol(root),
                                               type: :set_type([(type: t) : t <- types])
                                             );


//mk_head_tail_seq_type(head_type, tail_type) =
//    wrap_pseudo_types(
//      :seq,
//      [ wrap_pseudo_type(:head, head_type),
//        wrap_pseudo_type(:tail, tail_type)
//      ]
//    );
                                             
//mk_ne_seq_type(seq_type) = mk_head_tail_seq_type(seq_type, seq_type{seq_type});

//mk_fixed_seq_type([Any+]):
//  [t]     = mk_head_tail_seq_type(t, singleton{symbol{:empty_seq}}),
//  [f | r] = mk_head_tail_seq_type(f, mk_fixed_seq_type(r))
//;



SynType mk_type_from_ptrn(_):
  ptrn_obj(obj)                               = mk_type_from_obj(obj),
  ptrn_type(syn_type)                         = syn_type, 
  set_ptrn(branches)                          = :set_type([mk_type_from_ptrn(b) : b <- branches]),
  //## IS THERE ANY WAY TO AVOID THIS DUPLICATION?
  //## ALSO, BRANCHES SHOULD BE TAKEN CARE OF IN A LOCAL FUNCTION
  ptrn_branch(ptrn: syn_ptrn)                 = (type: mk_type_from_ptrn(syn_ptrn)),
  ptrn_branch(ptrn: syn_ptrn, card: c)        = (type: mk_type_from_ptrn(syn_ptrn), card: c),
  // BUG BUG BUG, THIS IS NOT TYPEABLE...
  term_ptrn(root: symbol, ptrn: syn_ptrn)     = term_type(root: symbol, type: mk_type_from_ptrn(syn_ptrn))
  //ptrn_var(type: syn_type, name: syn_var)     = 
  //open_set_ptrn(branches)                     =          // branches :: [SynPtrnBranch*]
  //split_ptrn(var1: syn_var1, var2: syn_var2)  =
;

SynType mk_type_from_obj(Obj obj):
  Symbol                      = :singleton(obj),
  int(Int n)                  = int_range(min: n, size: 1),
  :empty_set                  = :empty_set_type,
  // BUG BUG BUG: THE RESULTING TYPES MAY NOT BE COMPATIBLE
  // Also, the rand_sort is not nice here...
  set(objs)                   = :set_type(rand_sort({mk_type_from_obj(o) : o <- objs})),
  term(root: r, subobjs: os)  = :term_type(root: r, type: mk_type_from_obj(os))
;


wrap_pseudo_ptrn(Atom root, [Any+] ptrns) = term_ptrn(
                                              root: :symbol(root),
                                              ptrn: :set_ptrn([ptrn_branch(ptrn: p) : p <- ptrns])
                                            );



mk_fixed_seq_ptrn([Any+] ps) = mk_seq_ptrn(ps, :ptrn_obj(:symbol(:empty_seq)));

mk_seq_ptrn([Any+] head_ptrns, tail_ptrn):
  [p]      = wrap_pseudo_ptrn(:seq, [wrap_pseudo_ptrn(:head, [p]), wrap_pseudo_ptrn(:tail, [tail_ptrn])]),
  [f | r]  = mk_seq_ptrn([f], mk_seq_ptrn(r, tail_ptrn))
;

mk_map_ptrn(key_type, value_type, nonempty)
{
  cell_ptrn := ptrn_type{mk_fixed_seq_type([key_type, value_type])};
  return set_ptrn{[ptrn_branch{ptrn: cell_ptrn, card: if nonempty then :multiple else :any;}]};
}


mk_map_lookup_ptrn(es) = open_set_ptrn{[ptrn_branch{ptrn: mk_fixed_seq_ptrn([e.key, e.value])} : e <- es]};
