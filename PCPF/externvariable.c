#include<stdio.h>
char c='e';
void f1(){
    int c = 100;
  printf("\nThe value of integer a in f2 is %d\n\n",c);  
  }
void main(){
    printf("\nThe value of character a at entry in main is %c\n",c);
    c = 'q';
    f1();
    printf("The value of character a after modification in main is %c\n",c); 
    }