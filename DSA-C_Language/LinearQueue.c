#include<stdio.h>
int queue[100],front=-1,rear=-1,n;

void enqueue()
{
    int a;
    if(rear==(n-1))
    {
        printf("\nThe queue is overflow\n");
    }
    else
    {
        printf("\nEnter the number you want to insert: ");
        scanf("%d",&a);
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=a;
    }
}

void dequeue()
{
    if(front==-1 )
    {
        printf("\nOueue is underflow\n");
    }
    else
    {
        front++;
    }
}

void display()
{
    if (front==-1 && rear==-1)
    {
        printf("\nQueue is empty \n");
    }
    else
    {
        printf("\nthe elements in queue are \n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}

void main(){
    int choice;
    printf("Enter the number of elements in Queue:\n");
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