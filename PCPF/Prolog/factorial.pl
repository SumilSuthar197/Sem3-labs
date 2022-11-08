fact(0,1).
fact(N,F):-X is N-1,fact(X,Y),F is N*Y.

/*
 Output:

 ?- fact(5,F).
 F = 120

*/
