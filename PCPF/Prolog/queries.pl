zebra(shibu).
zebra(tibu).
mammal(X):-zebra(X).
vertebrate(X):-mammal(X).
have(X,spinalcord):-vertebrate(X).
eats(X,leaves):-herbivores(X).
herbivores(X):-zebra(X).
mascort(tibu,tsecgames).
livingbeing(X):-vertebrate(X).


/*
 Output:

 query 1:
 ?- eats(tibu,What).
 What = leaves.

 query 2:
 ?- have(shibu,spinalcord).
 true.

 query 3:
 ?- vertebrate(Who).
 Who = shibu ;
 Who = tibu.

 query 4:
 ?- mascort(tibu,tsecgames).
 true.
 */
