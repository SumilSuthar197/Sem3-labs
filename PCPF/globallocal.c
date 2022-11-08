#include<stdio.h>
extern char c='e';
char a='x',b='y';
void function1(){
    printf("\nValue at entry of function1  b = %c",b);
    b='k';
    printf("\nValue at exit of function1  b = %c",b);
}
void function2(){
    char d=a;
    float b=3.14;
    printf("\nThe value  of b in function2 is b=%f",b);
    for(int i=0;i<3;i++){
        d++;
        printf("\n%c",d);
    }
    printf("\n%c",d);
}
void main(){
    printf("\nthe value of a in main function before modification a=%c",a);
    printf("\nthe value of extern variable in main function before modification c=%c",c);
    a='s';
    c='p';
    printf("\nthe value of a in main function after modification a=%c",a);
    function1();
    function2();
    printf("\nthe value of extern variable in main function after modification c=%c",c);
}