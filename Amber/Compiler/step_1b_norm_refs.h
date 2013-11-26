//## WILL THIS WORK EVEN WITH STRANGE TEMPLATE TYPES?
//## FOR EXAMPLE, PARAMETRIC TYPES THAT CONTAIN ISTANTIATED VERSIONS OF THEMSELVES?
//## IS THAT EVEN POSSIBLE? TRY TO WORK OUT SOUND RULES FOR RECURSIVE PARAMETRIC TYPES

(TypeName => SynType) normalize_references((TypeName => SynType) types)
{
  norm_types  := ();
  types_to_do := types;

  while (types_to_do /= ())
    // Identifying clusters of type to expand. We can have three cases. Clusters can contain:
    //    one type that doesn't reference any other
    //    one type that only references itself
    //    a group of types, each of which references (generally indirectly) all other types in the cluster.
    clusters := type_clusters_to_expand(types_to_do);

    // Expanding the types in each cluster, and merging the clusters together
    exp_types := merge({expand(c, types_to_do) : c <- clusters});
    assert exp_types :: (TypeName => SynType);

    // Updating norm_types and types_to_do. All references to the types
    // that have just been expanded are replaces with the types themselves
    norm_types  := norm_types & exp_types;
    types_done := keys(exp_types);
    types_to_do := (s => replace_type_refs(t, exp_types, nil) : s => t <- types_to_do ; not in(s, types_done)); //## BAD
    assert not (? s => t <- norm_types : type_refs(t) /= {});
  ;

  assert size(norm_types) == size(types);
  assert norm_types :: (TypeName => SynType);

  return norm_types;


  TypeName** type_clusters_to_expand((TypeName => SynType) types)
  {
    ref_map        := (s => type_refs(t) : s => t <- types);
    deep_ref_map   := transitive_closure(ref_map);
    conn_comps     := {{s} & rs : s => rs <- deep_ref_map};
    min_conn_comps := {c1 : c1 <- conn_comps ; not (? c2 <- conn_comps : c2 /= c1, subset(c2, c1))};
    return min_conn_comps;
  }


  TypeName* ref_type_names(TypeSymbol ts):
    BasicTypeSymbol = {type_name(symbol: ts, arity: 0)},
    ParTypeSymbol   = {type_name(symbol: ts.symbol, arity: length(ts.params))} & union({type_refs(t) : t <- set(ts.params)});


  TypeName* type_refs(SynType type) = union(retrieve ref_type_names(ts) from type_ref(ts) in type end);


  TypeName type_symb_to_name(TypeSymbol ts):
    BasicTypeSymbol   = type_name(symbol: ts, arity: 0),
    ParTypeSymbol     = type_name(symbol: ts.symbol, arity: length(ts.params));


  SynType replace_type_ref(TypeSymbol ts, (TypeName => SynType) subst_map, Maybe[TypeName] self_type_name)
  {
    target_type_name := type_symb_to_name(ts);
    return :type_ref(ts) if not has_key(subst_map, target_type_name);
    exp_params := [replace_type_refs(t, subst_map, self_type_name) : t <- params(ts)];
    return :self if is_eq(target_type_name, self_type_name) and exp_params == [:type_var(i) : i <- inc_seq(length(exp_params))];
    par_type := subst_map[target_type_name];
    return replace type_var(n) in par_type with exp_params[n] end;
  }


  [SynType*] params(TypeSymbol ts):
    BasicTypeSymbol = [],
    ParTypeSymbol   = ts.params;


  SynType replace_type_refs(SynType type, (TypeName => SynType) subst_map, Maybe[TypeName] self_type_name) =
    replace type_ref(ts) in type with replace_type_ref(ts, subst_map, self_type_name) end;


  Bool is_expandable(T node, (T => T*) edges)
  {
    reach := {node};
    for (i : inc_seq(size(edges) + 1)) //## BAD BAD BAD SHOULD BE <loop (n)> OR <for (n)>
      reach := union({edges[n] : n <- reach ; has_key(edges, n)}) - {node};
    ;
    return reach == {};
  }


  SynType expand_type(TypeName type_name, (TypeName => SynType) types)
  {
    type := types[type_name];
    has_self_refs := false;
    loop
      refs := type_refs(type);
      break if refs == {};
      has_self_refs := has_self_refs or in(type_name, refs);
      type := replace_type_refs(type, types, :just(type_name));
    ;
    type := :rec_type(type) if has_self_refs;
    return type;
  }


  (TypeName => SynType) expand(TypeName* type_symbs, (TypeName => SynType) types)
  {
print "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --";
    exp_types := ();
print "#1";
    rem_symbs := type_symbs;
print "#2";
    rem_types := (s => types[s] : s <- rem_symbs);
print "#3";
    while (rem_symbs /= {})
print "#4";
      ref_map := (s => type_refs(rem_types[s]) : s <- rem_symbs);
print "#5";
      exp_type_symbs := {s : s <- rem_symbs ; is_expandable(s, ref_map)};
print "#6";
print rem_symbs;
print ref_map;
      assert exp_type_symbs /= {};
print "#7";
      newly_exp_types := (s => expand_type(s, rem_types) : s <- exp_type_symbs);
print "#8";
      exp_types := exp_types & newly_exp_types;
print "#9";
      rem_symbs := rem_symbs - exp_type_symbs;
print "#10";
print exp_type_symbs;
print rem_symbs;
print keys(exp_types);
print keys(rem_types);
      // rem_types := (s => replace type_ref(ts) ref in rem_types[s] with if in(ts, rem_symbs) then ref else exp_types[type_symb_to_name(ts)] end end : s <- rem_symbs);
      rem_types := (s => replace_type_refs2(s, rem_symbs, exp_types, rem_types) : s <- rem_symbs);
print "#11";
    ;
print "#12";
    return exp_types;
print "#13";
  }


  replace_type_refs2(s, rem_symbs, exp_types, rem_types) = 
    replace type_ref() ref in rem_types[s] with 
      // if in(ts, rem_symbs) then ref else exp_types[type_symb_to_name(ts)] end
      replace_type_ref2(ref, rem_symbs, exp_types)
    end;

  replace_type_ref2(ref, rem_symbs, exp_types)
  {
    tn := type_symb_to_name(untag(ref));
    if (in(tn, rem_symbs))
      print "#100";
      return ref;
    else
      print "#101";
      return exp_types[tn];
    ;
  }
}
