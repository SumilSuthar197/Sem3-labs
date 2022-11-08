#include<stdio.h>  
void change(int num) {    
    printf("Before adding value inside function num=%d \n",num);    
    num=num+100;    
    printf("After adding value inside function num=%d \n", num);    
}    
void change1(int *num) {    
    printf("Before adding value inside function num=%d \n",*num);    
    (*num) += 100;    
    printf("After adding value inside function num=%d \n", *num);    
}  
void main() {    
    int x=100,y;
    y=x;  

    printf("Before function call x=%d \n", x);    
    change(x);//passing value in function
    printf("After function call x=%d \n", x); 

    printf("Before function call x=%d \n", y);    
    change1(&x);//passing reference in function    
    printf("After function call x=%d \n", y);    
}