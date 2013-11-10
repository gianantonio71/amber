type Type       = type_any, atom_type, SymbType, IntType, TypeRef, TypeVar, SetType, SeqType, MapType, TupleType, TagType, UnionType;

type SymbType   = symb_type(SymbObj);

type IntType    = integer, low_ints(max: Int), high_ints(min: Int), int_range(min: Int, size: NzNat);

type TypeRef    = type_ref(TypeSymbol);

type TypeVar    = type_var(Atom);

type SeqType    = empty_seq_type, seq_type(elem_type: Type, nonempty: Bool), fixed_seq_type([Type+]);

type SetType    = empty_set_type, set_type(elem_type: Type, nonempty: Bool);

type MapType    = empty_map_type, map_type(key_type: Type, value_type: Type);

type TupleType  = tuple_type((label: SymbObj, type: Type, optional: Bool)+);

                  //## THE FIELD tag_type SHOULD BE OF TYPE <SymbType, SymbType+, atom_type>
type TagType    = tag_type(tag_type: Type, obj_type: Type);

type UnionType  = union_type(Type+);



// Excluding type_any (which is deprecated) and, for now, TypeVar and TypeRef

Bool is_subset(Type t1, Type t2):
  union_type(ts),  _                = not (? t <- ts : not is_subset(t, t2)),
  _,               union_type(ts)   = (? t <- ts : is_subset(t1, t)),

  :atom_type,      :atom_type       = true,
  :atom_type,      _                = false,

  symb_type(s1),   symb_type(s2)    = s1 == s2,
  symb_type(s),    :atom_type       = true,
  symb_type(),     _                = false,
        
  :integer,        :integer         = true,
  :integer,        _                = false,

