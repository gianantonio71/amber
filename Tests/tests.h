type Bool           = true, false;

type Nat            = [0..*];
type Int            = [*..*];
type NzNat          = [1..*];
type NzInt          = [1..*], [*..-1];
type NegInt         = [*..-1] ;

type Rat            = Int, rat(num: Int, den: [2..*]);

type Atom           = <+>;
type Any            = Atom, Int, Seq, Set, Map, TagObj;

type Point          = point(x: Rat, y: Rat);

type BinTree[T]     = leaf, bin_tree(value: T, left: BinTree[T], right: BinTree[T]);
type BinTree        = BinTree[Any];

type Set            = Any*;
type NeSet          = Any+;

type Seq            = [Any*];
type NeSeq          = [Any+];

type Tuple          = (Atom => Any);
type Map            = (Any => Any);
  
type TagObj         = (Atom @ Any);

type Char           = char(Nat);
type String         = string([Nat*]);



type List[T]  = nil_list, list(head: T, tail: List[T]);

type AtomList = List[Atom];

type AtomBinTree = BinTree[Atom];

type Maybe[T] = nil, just(T);

type MaybeAlias[T] = Maybe[T];

type MaybeAtom = Maybe[Atom];

type StrangeType[T] = (l1: Maybe[T], l2: Maybe[[0..*]]);

// type List = nil, list(head: [*..*], tail: List);

// type ListAlias = List;



// type TypeA[T] = ...;

// type TypeB[T2] = TypeA[T2];


type TypeA = a, f(TypeB), g(TypeA);
type TypeB = b, g(TypeA);
type TypeC = c, h(TypeB);
