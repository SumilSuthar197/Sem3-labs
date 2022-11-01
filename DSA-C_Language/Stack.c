#include<stdio.h>
int stack[100],top=-1,n;
//<-------------------PUSH----------------->
void push(){
    int a;
    if(top==(n-1))
    {
        printf("\nStack is overflow\n");
    }
    else
    {
        printf("\nEnter the number you want to insert: ");
        scanf("%d",&a);
        top++;
        stack[top]=a;
    }
}

//<-------------------POP----------------->
void pop()
{
    int del;
    if(top==-1)
    {
        printf("\nStack is underflow\n");
    }
    else
    {
        del=stack[top];
        top--;
        printf("\nthe element deleted is %d",del);
    }
}

//<-------------------DISPLAY----------------->
void display()
{
    if(top==-1)
    {
        printf("\nStack is empty\n");
    }
    else{
        printf("\nThe elements in stack are \n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

//<-------------------POSITION----------------->
void position()
{
    int pos;
    printf("\nenter the position(0 to %d) to know element at that position: ",n-1);
    scanf("%d",&pos);
    printf("\nThe element at position %d is %d",pos,stack[pos]);

}

void main(){
    int choice;
    printf("Enter the number of elements in stack:\n");
    scanf("%d",&n);
    while (choice!=5)
    {
      
    printf("\n1.push\n2.pop\n3.display\n4.position\n5.exit\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: push();
        break;
    case 2: pop();
        break;
    case 3: display();
        break;
    case 4: position();
        break;
    case 5: printf("\nExiting...");
        break;
    default:printf("\ninvalid input");
        break;
    }
    }
    
}