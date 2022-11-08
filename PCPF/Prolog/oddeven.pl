iseven(N) :-0 is mod(N,2).
sum([],[0,0]).
sum([H|T],[N1,N2]):-sum(T,[N3,N4]),
                    ( iseven(H)
                     ->  N1 is N3+H, N2 is N4
                     ;   N2 is N4+H, N1 is N3
                    ).

/*
Output:
?- sum([1,2,3],[N1,N2]).
N1 = 2,
N2 = 4.
*/

