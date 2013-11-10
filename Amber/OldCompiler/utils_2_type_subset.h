Bool is_subset(Type t1, Type t2, [Any -> Type] types)
{
  proved := {};
  new    := {[t1, t2]};
  
  loop
    conds := all_if({is_subset_if(left(p), right(p)) : p <- new}) where type_map = types;; // BIT UGLY
    
    return conds if conds :: Bool;

    assert conds :: {[Any, Type]*};
    
    conds := conds - proved;
    
    return true if conds = {};
    
    proved := proved & conds;
    new    := {[types[id], t] : [type_id(id), t] <- conds};
    
    assert(size(new) = size(conds));
  ;
}


type SubsetStatus = Bool, {[IdType, Type]*};

using
  type_map -> [Any -> Type];

def
  SubsetStatus is_subset_if(Type t1, Type t2):
    type_id(id1),     type_id(id2)      = if (id1 = id2) then true else {[t1, t2]} end,
    type_id(id),      _                 = {[type_id{id}, t2]},
    _,                type_id(id)       = is_subset_if(t1, type_map[id]),
    
    _,                :type_any         = true,
    
    :atom_type,       :atom_type        = true,
    
    :empty_set_type,  :empty_set_type   = true,
    :empty_set_type,  SetType           = includes_empty_set(t2),
    
    IntType,          IntType           = int_type_is_subset(t1, t2),
    
    SinglType,        :atom_type        = true,
    SinglType,        SinglType         = unwrap(t1) = unwrap(t2),
    
    LeafType,         UnionType         = {? t <- t2.* ; is_subset_if(t1, t)},
    LeafType,         _                 = false,
    
    SetType,          SetType           = set_type_is_subset(t1, t2),
    SetType,          UnionType         = is_subset_of_union(t1, t2),
    SetType,          _                 = false,
    
    TermType,         TermType          = if t1.root = t2.root then is_subset_if(t1.type, t2.type) else false end,
    TermType,         UnionType         = is_subset_of_union(t1, t2),
    TermType,         _                 = false,
    
    UnionType,        _                 = all_if({is_subset_if(t, t2) : t <- t1.*})
  ;


  SubsetStatus set_type_is_subset(SetType t1, SetType t2)
  {
    //print :set_type_is_subset{[size(t1.*), size(t2.*)]};
    
    //## HERE ALL THE LOOPS ON SETS ARE SO INCREDIBLY UGLY!
    //## COME UP WITH SOMETHING TO IMPROVE ON THIS MESS
    
    if (is_set_of_any(t1))
      return is_set_of_any(t2) and sum_of_card_is_subset([unwrap(t1).card -> 1], unwrap(t2).card);;
    
    //if ({? b1 <- t1.* ; size({b2.type : b2 <- t2.* ; is_candidate_subset(b1.type, b2.type)}) > 1})
    //  print for (b1 <- t1.*){
    //          [b1.type, {b2.type : b2 <- t2.* ; is_candidate_subset(b1.type, b2.type)}]
    //        };;

    // Making sure that there is only one candidate superset type for each subset one
    assert not {? b1 <- t1.* ; size({b2.type : b2 <- t2.* ; is_candidate_subset(b1.type, b2.type)}) > 1}; // BAD AND UGLY
    
    // Matching every superset branch with all the candidate subset ones
    matches := for (b2 <- t2.*)
                 {[b2, {b1 : b1 <- t1.* ; is_candidate_subset(b1.type, b2.type)}]};

    // If a branch does not have a candidate superset then t1 cannot be subset of t2
    //if ({? b1 <- t1.* ; {b2.type : b2 <- t2.* ; is_candidate_subset(b1.type, b2.type)} = {}})
    return false if union({bs : [_, bs] <- matches}) /= t1.*;
    
    //print :set_type_is_subset_02;
    
    // Checking that cardinalities are OK
    //## BAD BAD BAD UGLY UGLY UGLY THE WHOLE STATEMENT IS APPALING
    if ({? [supbr, subbrs] <- matches ; not sum_of_card_is_subset(
                                              apply(subbrs) where f(b) = b.card;, // UGLY
                                              supbr.card
                                            )}) // UGLY
      //print :set_type_is_subset_03;
      return false;;

    //## THIS IS A MORE ACCEPTABLE VERSION OF THE ABOVE STATEMENT    
    //for ([supbr, subbrs] <- matches)
    //  subbrs_cards := apply(subbrs) where f(b) = b.card;
    //  return false if (not sum_of_card_is_subset(subbrs_cards, supbr.card));
    //;

    //print :set_type_is_subset_03;

    return all_if({is_subset_if(b.type, sb.type) : [sb, bs] <- matches, b <- bs});
    
    is_set_of_any(t) = size(t.*) = 1 and unwrap(t).type = :type_any;
  }
  
  SubsetStatus is_subset_of_union(Type t1, UnionType t2)
  {
    candidate_supersets := {t : t <- t2.* ; is_candidate_subset(t1, t)};
    
    return false if candidate_supersets = {};
    
    return is_subset_if(t1, only_element(candidate_supersets));
  }
  
  
  Bool is_candidate_subset(Type t1, Type t2) = t1 = t2 or not are_compatible(t1, t2);

end


Bool sum_of_card_is_subset([Card -> NzNat] cards, Card card)
{
  can_be_empty    := lookup(cards, :required, 0) = 0 and lookup(cards, :multiple, 0) = 0;
  can_be_multiple := lookup(cards, :any, 0) > 0      or
                     lookup(cards, :multiple, 0) > 0 or
                     lookup(cards, :optional, 0) + lookup(cards, :required, 0) > 1;

  return false if can_be_empty    and in(card, {:required, :multiple});
  return false if can_be_multiple and in(card, {:optional, :required});

  return true;
}

Bool int_type_is_subset(IntType t1, IntType t2):
  _,                            :integer                        = true,
  low_ints(max: n1),            low_ints(max: n2)               = n2 >= n1,
  high_ints(min: n1),           high_ints(min: n2)              = n2 <= n1,
  int_range(min: n1, size: s1), low_ints(max: n2)               = n2 >= n1+s1-1,
  int_range(min: n1, size: s1), high_ints(min: n2)              = n2 <= n1,
  int_range(min: n1, size: s1), int_range(min: n2, size: s2)    = n2 <= n1 and n2+s2 >= n1+s2,
  _,                            _                               = false
;

SubsetStatus all_if(SubsetStatus+ status_set) = if in(false, status_set) then false,
                                                   status_set = {true}   then true
                                                                         else union(status_set - {true});;

Bool includes_empty_set(SetType type) = not {? b <- type.* ; in(b.card, {:required, :multiple})};
