#include<stdio.h>
int queue[100],f=-1,r=-1,n;
void enqueue()
{
    int a;
    if(((r+1)%n)==f)
    {
        printf("\nQueue is overflow");
    }
    else{
        printf("\nEnter the number you want to insert: ");
        scanf("%d",&a);
        if(f==-1 && r==-1)
        {
            f=r=0;
        }
        else if((r==(n-1))&&(f!=0))
        {
            r=0;
        }
        else
        {
        r=(r+1)%n;
        }
        queue[r]=a;
        printf("inserted");
    }
}

void dequeue()
{
    if(f==-1)
    {
        printf("\nQueue is underflow");
    }
    else
    {
        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else if((f==n-1)&&(r!=0))
        {
            f=0;
        }
        else
        {
            f=(f+1)%n;
        }
        printf("\nElement is deleted");
    }
}

void display()
{
    if (f==-1)
    {
        printf("\nQueue is empty \n");
    }
    else
    {
        printf("\nthe elements in queue are \n");
        int i=f;
        do
        {
            printf("%d\n",queue[i]);
            i=(i+1)%n;
        } while (i!=((r+1)%n));
    }
}

void main(){
    int choice;
    printf("Enter the number of elements in Circular Queue:\n");
    scanf("%d",&n);
    while (choice!=4)
    {

    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exist\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: enqueue();
        break;
    case 2: dequeue();
        break;
    case 3: display();
        break;
    case 4: printf("\nExiting...");
        break;
    default:printf("\ninvalid input");
        break;
    }
    }
}