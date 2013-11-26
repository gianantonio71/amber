using (TypeSymbol => SynType) typedefs
{
  ObjPartSet syn_partitions(SynType type):
    :atom_type      = {:symbols},
    symb_type(s)    = {partition(s)},
    IntType         = {:integers},
    //## BUG BUG BUG ASSUMING THERE ARE NO DIRECT CYCLES IN TYPEDEFS
    //## BUG BUG BUG ALSO ASSUMING NO TYPE REFERENCE IS "DANGLING"
    type_ref(ts)    = syn_partitions(typedefs[ts]),
    TypeVar         = all_objects,
    SynSetType      = {:sets},
    SynSeqType      = {:sequences},
    SynMapType      = {:maps},
    SynTupleType    = {:maps},
    union_type(ts)  = merge_partitions({syn_partitions(t) : t <- ts}),
    tag_type()      = { tag_type_parts := syn_partitions(type.tag_type);
                        return {:tagged_objs} if tag_type_parts == {:symbols};
                        // HERE WE ASSUME WE'RE ALREADY CHECKED THAT IF THE TAG TYPE IS A TYPEDEF,
                        // THEN THAT TYPEDEF IF A SUBSET OF THE SET OF ALL SYMBOLS
                        assert tag_type_parts :: (<symbol(Atom)>+);
                        return {:tagged_obj(a) : symbol(a) <- tag_type_parts}; //## BAD, WITHOUT THE ABOVE ASSERTION, THIS COULD RETURN THE WRONG RESULTS
                      };

  ObjPartSet syn_partitions(SynPtrn ptrn):
    ptrn_any                                = all_objects,
    obj_ptrn(obj)                           = {partition(obj)},
    type_ptrn(type)                         = syn_partitions(type),
    ext_var_ptrn()                          = all_objects,  //## COULD THIS BE IMPROVED?
    var_ptrn(ptrn: p, ...)                  = syn_partitions(ptrn.ptrn),
    var_ptrn()                              = all_objects,
    tuple_ptrn()                            = {:maps},
    tag_ptrn(tag: obj_ptrn(object(a)), ...) = {:tagged_obj(a)},
    tag_ptrn(tag: var_ptrn(name: v), ...)   = {:tagged_objs};
}
