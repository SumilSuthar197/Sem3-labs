cube(N):-A is 6*N*N,
         write('The Area of Cube is '),
         write(A),
         nl,
         B is N*N*N,
         write('The volume of Cube is '),
         write(B).
/*
  Output:

  ?- cube(4).
  The Area of Cube is 96
  The volume of Cube is 64
  true.
*/
