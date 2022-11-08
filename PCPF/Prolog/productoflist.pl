product([A],[B],S):-X is A*B,append([X],[],S).
product([A|As],[B|Bs],S):-X is A*B,product(As,Bs,P),append([X],P,S).

/*
Output:
?- product([1,2,3],[4,5,6],F).
F = [4, 10, 18] .
*/

product1([H],F):-F is H.
product1([H|Tail],F):-product1(Tail,S),F is H*S.
/*
Output:
?- product1([1,2,3,4,5,6],F).
F = 720
*/

product2([A],[B],S):-S is A*B.
product2([A|As],[B|Bs],S):-X is A*B,product2(As,Bs,P),S is X+P.
/*
Output:
?- product2([1,2,3],[4,5,6],F).
F = 32
*/
