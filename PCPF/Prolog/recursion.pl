cube([H]):-X is H*H*H,write(X).
cube([H|Tail]):-X is H*H*H,write(X),write(','),cube(Tail).
/* Output:
   ?- cube([1,2,3,4,5,6,7,8,9]).
   1,8,27,64,125,216,343,512,729
   true
*/

cube1([H],S):-X is H*H*H,append([X],[],S).
cube1([H|Tail],S):-X is H*H*H,cube1(Tail,T),append([X],T,S).
/*
  Output:
  ?- cube1([1,2,3,4,5,6,7,8,9],S).
  S = [1, 8, 27, 64, 125, 216, 343, 512, 729]
*/

table(M,N,N):-X is M*N,write(X).
table(M,T,N):-X is M*T,write(X),nl,A is T+1,table(M,A,N).


/*
  Output:
  ?- table(2,1,10).
  2
  4
  6
  8
  10
  12
  14
  16
  18
  20
*/

square([H],N):-X is H*H,append([X],[],N).
square([H|Tail],N):-X is H*H,square(Tail,M),append([X],M,N).
/*
  Output:
  ?- square([10,11,12,13,14,15],S).
  S = [100, 121, 144, 169, 196, 225]
*/
powertable(M,1,T):-T is M,C=M^1,write(C),write(=),write(T),nl.
powertable(M,N,T):-A is N-1,powertable(M,A,P),T is M*P,C=M^N,write(C),write(=),write(T),nl.
/*
  Output:
  ?- powertable(2,4,T).
  2^1=2
  2^2=4
  2^3=8
  2^4=16
  T = 16
*/

multiply([H],N,S):-X is H*N,append([X],[],S).
multiply([H|Tail],N,S):-X is H*N,multiply(Tail,N,P),append([X],P,S).
/*
  Output:
  ?- multiply([2,4,6,8],2,S).
  S = [4, 8, 12, 16]
*/

downtoloop(0).
downtoloop(N):-N>0,write(N),nl,X is N-1,downtoloop(X).
/*
  ?- downtoloop(5).
  5
  4
  3
  2
  1
  true
*/
