
type LeafType     = type_any,
                    atom_type,
                    empty_seq_type,
                    empty_set_type,
                    empty_map_type,
                    SymbType,
                    IntType;

//type LeafClause   = incl_clause(ptrn: Pattern, src: Expr),  // UGLY
//                    excl_clause(ptrn: Pattern, src: Expr);
//
////## FIND A BETTER NAME
//type NuType       = type_any, atom_type, empty_set_type, SymbType, IntType, SetType, TermType;

////////////////////////////////////////////////////////////////////////////////

Int max(<int_range(min: Int, size: NzNat)> t) = t.min + t.size - 1; //## BAD BAD

////////////////////////////////////////////////////////////////////////////////

//Bool separated(IntType t1, IntType t2):
//  :integer,     _            = false,
//  
//  low_ints(),   low_ints()   = false,
//  low_ints(),   high_ints()  = t2.min > t1.max + 1,
//  low_ints(),   int_range()  = t2.min > t1.max + 1,
//
//  high_ints(),  high_ints()  = false,
//  high_ints(),  int_range()  = t1.min > t2.min + t2.size,
//  
//  int_range(),  int_range()  = t1.min > t2.min + t2.size or t2.min > t1.min + t1.size,
//  
//  _,            _            = separated(t2, t1);
//
//////////////////////////////////////////////////////////////////////////////////

  //using
  //  typedefs -> (Any => Type);

  //def

  // Types are supposed to have already passed the "no direct ref cycles" test
  //Bool are_compatible(Type t1, Type t2):
  //  IntType,          IntType         = separated(t1, t2),
  //  _,                _               = are_disjoint(partitions(t1), partitions(t2));

  //## REENABLE THE ABOVE IMPLEMENTATION AT SOME STAGE
  Bool are_compatible(Type t1, Type t2, (Any => Type) tdefs) =
        are_disjoint(partitions(t1), partitions(t2)) where typedefs = tdefs;;


//  NuType* expand(Type type):
//    type_id(id)    = expand(type_map[id]),
//    union_type(ts) = union({expand(t) : t <- ts}),
//    _              = {type};

//end

////////////////////////////////////////////////////////////////////////////////

//Type bool_type = :union_type({:singleton(:symbol(true)), :singleton(:symbol(false))});
//Type nat_type  = high_ints(min: 0);

////////////////////////////////////////////////////////////////////////////////

Var first_unused_int_var(Var *vars)
{
  i := 0;
  while (in(:unique_var(i), vars))
    i := i + 1;;
  return :unique_var(i);
}

//Var new_unique_var = :unique_var(_counter_(nil));

////////////////////////////////////////////////////////////////////////////////

//Bool empty_set_is_member(SetType type) = not {? b <- untag(type) ; in(b.card, {:required, :multiple})};

////////////////////////////////////////////////////////////////////////////////

type BasicUntypedSng  = untyped_sgn(name: FnSymbol, arity: Nat);

type UntypedSng       = untyped_sgn(
                          name:        FnSymbol,
                          arity:       Nat,
                          impl_params: BasicUntypedSng+?
                        );


//BasicUntypedSng untyped_sgn(Signature d) = untyped_sgn(
//                                             name:  d.name,
//                                             arity: arity(d)
//                                           );

UntypedSng untyped_sgn(FnDef fd) = untyped_sgn(
                                     name:        fd.name,
                                     arity:       arity(fd),
                                     impl_params: {untyped_sgn(s) : s <- fd.impl_env} if fd.impl_env /= {}
                                   );

Nat arity(<FnDef, Signature> obj) = length(obj.params);


using
  impl_params -> BasicUntypedSng*;

def

  Bool is_def(FnSymbol name, Nat arity, UntypedSng* env)
  {
    rel_sgns := {s : s <- env ; s.name = name, s.arity = arity};
    
    assert {
      res1 := rel_sgns /= {} and (? s <- rel_sgns : subset(impl_params(s), impl_params));
      res2 := (? s <- rel_sgns : subset(impl_params(s), impl_params));
      
      return res1 = res2;
    };
      
    return (? s <- rel_sgns : subset(impl_params(s), impl_params));
    
    //## WHY WAS IT LIKE THIS ORIGINALLY?
    //return rel_sgns /= {} and (? s <- rel_sgns : subset(impl_params(s), impl_params));

    BasicUntypedSng* impl_params(UntypedSng sgn) = if sgn.impl_params? then sgn.impl_params else {} end;
  }

end


Bool op_<(SymbObj s1, SymbObj s2) = lower_than(untag(s1), untag(s2));

Bool lower_than(Atom a1, Atom a2)
{
  str1 := _str_(a1);
  str2 := _str_(a2);
  
  len1 := length(str1);
  len2 := length(str2);
  
  //return len1 < len2 if len1 /= len2;
  return (len2 - len1) :: NzNat if len1 /= len2; //## BAD BAD BAD UGLY HACK TO WORK AROUND A BUG IN THE INTERPRETER
  
  for (ch1, i : untag(str1))
    ch2 := str2[i];
    //return ch1 < ch2 if ch1 /= ch2;
    return (ch2 - ch1) :: NzNat if ch1 /= ch2; //## BAD BAD BAD UGLY HACK TO WORK AROUND A BUG IN THE INTERPRETER
  ;
  
  fail;
}
