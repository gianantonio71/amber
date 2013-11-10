//(Any => Type) normalize_references((Any => Type) types)
//{
//  norm_types  := ();
//  types_to_do := types;
//  
//  rec_type_clusters := {};
//  rec_types         := {};
//
//  loop
//    loop
//      loop
//        assert size(norm_types.*) + size(types_to_do.*) = size(types.*);
//        
//        no_ref_types := [s -> t : [s, t] <- types_to_do ; dangling_refs(t, rec_types) = {}]; //## BAD
//
//        break if no_ref_types = [->];
//        
//        other_types := types_to_do - no_ref_types;
//        norm_types  := merge(norm_types, no_ref_types);
//        types_to_do := [s -> replace_dangling_refs(t, no_ref_types) : [s, t] <- other_types];
//        
//        assert not {? [s, t] <- norm_types ; dangling_refs(t, rec_types) /= {}};
//      ;
//      
//      // Now all non recursive types have been dealt with
//
//      self_ref_types := [s -> t : [s, t] <- types_to_do ; dangling_refs(t, rec_types) = {s}];
//      
//      break if self_ref_types = [->];
//
//      norm_types        := merge(norm_types, self_ref_types);
//      types_to_do       := types_to_do - self_ref_types;
//      rec_type_clusters := rec_type_clusters & {{k} : k <- keys(self_ref_types)};
//      rec_types         := rec_types & keys(self_ref_types);
//      
//      assert rec_types = union(rec_type_clusters);
//      assert not {? [s, t] <- norm_types ; dangling_refs(t, rec_types) /= {}};
//    ;
//
//    // Now all non recursive and self recursive types have been dealt with
//
//    //break if types_to_do = [->];
//
//    ref_map        := [s -> dangling_refs(t, rec_types) : [s, t] <- types_to_do];
//    deep_ref_map   := transitive_closure(ref_map);
//    conn_comps     := {{s} & rs : [s, rs] <- deep_ref_map};
//    min_conn_comps := {c1 : c1 <- conn_comps ; not {? c2 <- conn_comps ; c2 /= c1, subset(c2, c1)}};  //## UGLY NAMING
//
//    assert not {? [s, rs] <- ref_map ; size(rs) < 1};
//    
//    // Not sure at all about this
//    red_min_conn_comps := for (c <- min_conn_comps) {{
//                            red_comp := {s : s <- c ; size(ref_map[s]) > 1};
//                            return if red_comp /= {} then red_comp else c end;
//                          }};
//    
//    assert size(min_conn_comps) = size(red_min_conn_comps);
//    
//    final_types_per_comp := for (c <- red_min_conn_comps) {
//                              [s -> expand(s, c & rec_types, update(types, norm_types)) : s <- c]
//                            };
//
//    assert final_types_per_comp :: {[Any -> Type]*};
//
//    final_types := merge(final_types_per_comp);
//    norm_types  := merge(norm_types, final_types);
//
//    types_done := keys(final_types);
//
//    types_to_do := [s -> replace_dangling_refs(t, final_types) : [s, t] <- types_to_do ; not in(s, types_done)]; //## BAD
//
//    rec_type_clusters := rec_type_clusters & red_min_conn_comps;
//    rec_types         := rec_types & union(red_min_conn_comps);
//
//    assert not {? [s, t] <- norm_types ; dangling_refs(t, rec_types) /= {}};
//    assert rec_types = union(rec_type_clusters);
//    
//    break if types_to_do = [->];
//  ;
//  
//  assert size(norm_types.*) = size(types.*);
//  assert union({retrieve id from type_id(id) in t end : [s, t] <- norm_types}) = rec_types;
//  
//  norm_types := [s -> normalize_type(t) : [s, t] <- norm_types];
//
//  return norm_types;
//  
//  //ref_to_cluster_map := merge(
//  //                        for (c <- rec_type_clusters) {{
//  //                          cluster_map := [s -> norm_types[s] : s <- c];
//  //                          return [s -> cluster_map : s <- c];
//  //                        }}
//  //                      );
//
//  //final_norm_types := for ([s, t] <- norm_types)
//  //                      [s -> replace type_id(id: id) in t with type_id{id: id, types: ref_to_cluster_map[id]} end];
//
//  //return final_norm_types;
//
//
//  // Local functions
//  
//  Type normalize_type(Type type) = replace <UnionType, IdType> t in type //## BAD BAD BAD
//                                     with
//                                       try (t)
//                                         union_type(ts+) = mk_union_type({normalize_type(st) : st <- ts}),
//                                         IdType          = t;                                      
//                                     ;;
//
//
//  Type expand(Any start, Any+ stops, [Any -> Type] types)
//  {
//    type := types[start];
//    
//    while (dangling_refs(type, stops) /= {})
//      type := replace type_id(id) in type //replace_dangling_refs(type, stops, types);
//              with if not in(id, stops)
//                     then types[id]
//                     else type_id{id};
//              ;;
//    ;
//    
//    return type;  
//
//    //replace_dangling_refs(type, stops, subst_map) = replace type_id(id) in type     
//    //                                                with if not in(id, stops)
//    //                                                       then subst_map[id]
//    //                                                       else type_id{id};
//    //                                                ;;
//  }
//
//  dangling_refs(type, rec_types) = retrieve id from type_id(id) in type end - rec_types;
//
//  replace_dangling_refs(type, subst_map) = replace type_id(id) in type with lookup(subst_map, id, type_id{id}) end;
//
//  [T1 -> T2] op_-([T1 -> T2] m1, [T1 -> T2] m2) = if s = {} then [->] else :map @ s end
//                                                  let
//                                                    //## BUG BUG BUG INVESTIGATE WHY IT NEVER
//                                                    //## SHOWED UP
//                                                    s := m1.* - m2.*;
//                                                  ;
//}


