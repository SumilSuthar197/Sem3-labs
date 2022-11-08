fibo(1,0).
fibo(2,1).
fibo(N,F):-A is N-1,
           B is N-2,
           fibo(A,X),
           fibo(B,Y),
           F is X+Y.

/*
  Output:

  ?- fibo(5,A).
  A = 3

  ?- fibo(7,A).
  A = 8
*/
