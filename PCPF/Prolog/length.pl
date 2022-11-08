length1([],0).
length1([H|Tail],L):-length1(Tail,L1),L is L1+1.

/*
Output:
?- length1([1,2,3,4,5,6],F).
F = 6.
*/
