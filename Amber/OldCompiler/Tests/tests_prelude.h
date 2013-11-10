
//type UnicodeText = unicode_text([Nat*]);
//type UnicodeChar = unicode_char(Nat);
//
//type UnStr  = [UnChar*];
//type UnChar = un_char(Nat);
//
//type Un_str  = [Un_char*];
//type Un_char = un_char(Nat);
//
//
//type UN_STR  = [UN_STR*];
//type UN_CHAR = un_char(NAT);
//
//
//type String  = [Char*];
//type Char    = char(Nat);

testcases disabled

	cp1 := cart_prod({4, 2, 6, 3, 3}, {true, false, :unknown});
	cp2 := { [2, false  ],
           [2, true   ],
           [2, :unknown],
           [3, false  ],
           [3, true   ],
           [3, :unknown],
           [4, false  ],
           [4, true   ],
           [4, :unknown],
           [6, false  ],
           [6, true   ],
           [6, :unknown]
	       };

  cp1 = cp2;

	//cart_prod2(cart_prod({4, 2, 6, 3, 3}, {true, false, unknown}), {b10, a3, a51}) =
	//{
	//	[2, false, a3],
	//	[2, false, a51],
	//	[2, false, b10],
	//	[2, true, a3],
	//	[2, true, a51],
	//	[2, true, b10],
	//	[2, unknown, a3],
	//	[2, unknown, a51],
	//	[2, unknown, b10],
	//	[3, false, a3],
	//	[3, false, a51],
	//	[3, false, b10],
	//	[3, true, a3],
	//	[3, true, a51],
	//	[3, true, b10],
	//	[3, unknown, a3],
	//	[3, unknown, a51],
	//	[3, unknown, b10],
	//	[4, false, a3],
	//	[4, false, a51],
	//	[4, false, b10],
	//	[4, true, a3],
	//	[4, true, a51],
	//	[4, true, b10],
	//	[4, unknown, a3],
	//	[4, unknown, a51],
	//	[4, unknown, b10],
	//	[6, false, a3],
	//	[6, false, a51],
	//	[6, false, b10],
	//	[6, true, a3],
	//	[6, true, a51],
	//	[6, true, b10],
	//	[6, unknown, a3],
	//	[6, unknown, a51],
	//	[6, unknown, b10]
	//};

end


testcases disabled

	{2, 3} = {3, 2};
	{2, 3, 2, 2} = {3, 3, 2, 3, 3};

	//double({2}) = {4};
	//double({2, 3}) = {4, 6};
	//double({2, 4, 3}) = {4, 8, 6};
	//double({2, 4, 3, 5, 3}) = {4, 8, 6, 10, 6};
	//double({2, 4, 3, 5, 3}) = {4, 8, 6, 10};


	//double({2}) = {4};
	//double({2, 3}) = {6, 4};
	//double({2, 4, 3}) = {6, 4, 8};
	//double({2, 4, 3, 5, 3}) = {10, 6, 8, 4};

	in(2, {2});
	in(2, {2});
	in(3, {5}) = false;
	not in(3, {5});
	not(in(3, {5}));

	in(5, {2, 5, 3});
	in(3, {2, 5, 3});
	in(2, {2, 5, 3});

	not in(4, {2, 5, 3});
	not in(0, {2, 5, 3});
	not in(1, {2, 5, 3});
	not in(6, {2, 5, 3});
	not in(8, {2, 5, 3});

end


testcases disabled

	union({}) = {};
	union({{}}) = {};
	union({{}, {}}) = {};
	union({{1, 2}}) = {1, 2};
	union({{1, 2}, {}}) = {1, 2};
	union({{1, 2}, {3, 4}}) = {1, 2, 3, 4};
	union({{1, 2}, {3, 4}, {5, 6, 7}}) = {1, 2, 3, 4, 5, 6, 7};
	union({{1, 2}, {3, 4}, {5, 6, 7}, {8}}) = {1, 2, 3, 4, 5, 6, 7, 8};
	union({{1, 2}, {}, {3}, {}, {5, 6, 7}, {8}}) = {1, 2, 3, 5, 6, 7, 8};

	{4, 6, 2, 8} & {6, 2, 7, 10} = {10, 8, 7, 6, 4, 2};
	{4, 6, 2, 8} & {6, 2, 7, 10} = {10, 8, 7, 6, 4, 2, 2, 4, 6, 7, 8, 10};

	intersection({4, 6, 2, 8}, {6, 2, 7, 10}) = {6, 6, 2, 6};

	{4, 6, 2, 8} - {6, 2, 7, 10} = {4, 8};
	{4, 6, 2, 8} - {6, 2, 7, 10} /= {4, 6, 8};
	{4, 6, 2, 8} - {6, 2, 7, 10} /= {4, 6};

	size({}) = 0;
	size({4}) = 1;
	size({4, 6}) = 2;
	size({4, 6, 2}) = 3;
	size({4, 6, 2, 8}) = 4;
	size({4, 6, 2, 8, 0}) = 5;
	size({4, 6, 2, 8, 2, 5, 8}) = 5;

	rand_sort({4, 6, 2, 8, 2, 5, 8}) = [2, 4, 5, 6, 8];
	rand_sort({4, 6, 2, 8, 2, 5, 8, true, false, :unknown}) = [true, false, 2, 4, 5, 6, 8, :unknown];

	only_element({4}) = 4;
	only_element({true, true}) = true;
	only_element({}, 5) = 5;
	only_element({3}, 5) = 3;
	only_element({3, 7}, 5) = 5;

end


testcases disabled

  m1 := (:a1 => 3, :a2 => 1, :a3 => 5);
  m2 := (:a2 => 3, :a3 => 4, :a4 => 2);
  
	instances(:a1, m1) = 3;
	instances(:a2, m1) = 1;
	instances(:a3, m1) = 5;

	m1 & m2 = (:a1 => 3, :a2 => 4, :a3 => 9, :a4 => 2);
	m1 - m2 = (:a3 => 1, :a1 => 3);

end

		
testcases disabled

	subseq(inc_seq(15), 3, 8) = [3, 4, 5, 6, 7, 8, 9, 10];

	inc_seq(0) = [];
	inc_seq(1) = [0];
	inc_seq(2) = [0, 1];
	inc_seq(3) = [0, 1, 2];
	inc_seq(4) = [0, 1, 2, 3];
	inc_seq(5) = [0, 1, 2, 3, 4];
	inc_seq(6) = [0, 1, 2, 3, 4, 5];

	reverse([0, 1, 2, 3, 4]) = [4, 3, 2, 1, 0];
	reverse(inc_seq(20)) = dec_seq(20);

end

Bool lt(Int a, Int b):
  0, [1..*]  = true,
  0, _       = false,
  _, _       = lt(0, b - a);


testcases disabled

  size := 10000;
	mergesort(inc_seq(size)) where is_strictly_ordered(a, b) = b < a; = dec_seq(size);

	//	2.6 sec in release mode 
	//is mergesort(inc_seq(1000)) where Bool is_strictly_ordered(Int a, Int b) = b < a; = dec_seq(1000);
	
	//s := fast_inc_seq(1000);
	//for (i : inc_seq(100))
	//  r := reverse(s);
	//  //reverse(s) :: Any;
	//;
	
end

testcases disabled

	//	2.6 sec in release mode 
	mergesort(inc_seq(500)) where is_strictly_ordered(a, b) = b < a; = dec_seq(500);

	mergesort(inc_seq(20)) where is_strictly_ordered(a, b) = b < a; = dec_seq(20);
	//quicksort(inc_seq(20)) where is_strictly_ordered(a, b) = b < a; = dec_seq(20);

	//quicksort(inc_seq(20) & dec_seq(20), true) where is_strictly_ordered(a, b) = b < a; = dec_seq(20);

	mergesort([8, 4, 2, 7, 10, 12, 0, 2, 15]) where is_strictly_ordered(a, b) = a < b; = [0, 2, 2, 4, 7, 8, 10, 12, 15];

	mergesort([]) where is_strictly_ordered(a, b) = b < a; = [];
	mergesort([4]) where is_strictly_ordered(a, b) = b < a; = [4];
	mergesort([2, 7]) where is_strictly_ordered(a, b) = b < a; = [7, 2];

	//quicksort([8, 4, 2, 7, 10, 12, 0, 2, 15], true) where is_strictly_ordered(a, b) = b < a;
	//	=
	//quicksort([8, 4, 7, 15, 0, 8, 2, 7, 10, 12, 0, 2, 15], true) where is_strictly_ordered(a, b) = b < a;;

end


testcases disabled
	set([]) = {};
	set([1]) = {1};
	set([2, 3]) = {2, 3};
	set([6, 5, 4]) = {4, 6, 5};
end


testcases disabled
  [1 : x <- [4, 7, 3, 0]] = [1, 1, 1, 1];
  [x + 1 : x <- [4, 7, 3, 0]] = [5, 8, 4, 1];
  [x + 1 : x <- [4, 7, 3, 0], x = 7 or x = 3] = [8, 4];
  [x + 1 : x <- [4, 7, 3, 0], x > 5] = [8];
end


testcases disabled
  s := [6, true, 9];
  s[0] = 6;
  s[1] = true ;
  s[2] = 9;
  //at([6, true, 9], 3) = !!;

  length([]) = 0;
  length([1]) = 1;
  length([6, 9]) = 2;
  length([6, true, 9]) = 3;

  [] & [] = [];
  [1] & [] = [1];
  [] & [4] = [4];
  [5, 2] & [] = [5, 2];
  [5, 2] & [false] = [5, 2, false];
  [:unknown, 5, 31, true] & [:hello, :name, 1208] = [:unknown, 5, 31, true, :hello, :name, 1208];

  [6, true, 9] = [6, true, 9];
  [6, true, 9] /= [6, true, 8];

end


testcases disabled

  not false = true;
  not(false) = true;
  not(false and true) = true;
  not not(true and true) = true;
  if not(false and true) then 0 else 1; = 0;
  if not(true and true) then 0 else 2; = 2;

  if true then :pippo else :pluto; = :pippo;
  if false then :pippo else :pluto; = :pluto;
  
  if true then 0 else 1; = 0;
  if false then 0 else 2; = 2;
  
  -0 = 0;  
  --0 = 0;
  --1 = 1;
  -- -1 = -1;
  - - - 1 = -1;
  
  1 + 0 = 1;
  1 + 1 = 2;
  1 + 2 = 3;
  0 + 2 = 2;
  0 + 8 = 8;
  5 + 0 = 5;
  4 + 7 = 11;
  
  -3 + 9   = 6;
  12 + -14 = -2;
  -8 + 5   = -3;
  7 + -2   = 5;
  -3 + -2  = -5;
  
  15 - 3  = 12;
  4 - 7   = -3;
  -2 - 3  = -5;
  -1 - -5 = 4;
  
  3 * 5   = 15;
  2 * -4  = -8;
  -3 * 2  = -6;
  -4 * -3 = 12;
  0 * 6   = 0;
  0 * -2  = 0;
  9 * 0   = 0;
  -11 * 0 = 0;
end
