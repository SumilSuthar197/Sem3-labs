sphere:-write('enter the radius of sphere'),nl,
        read(Radius),
        Volume is ((4*3.14*Radius*Radius*Radius)/3),
        write('volume of sphere is '),
        write(Volume),nl,
        Area is 4*3.14*Radius*Radius,
        write('surface area of sphere is '),
        write(Area).

/*
Output:
?- sphere.
enter the radius of sphere
|: 3.
volume of sphere is 113.04
surface area of sphere is 113.03999999999999
true.
*/
