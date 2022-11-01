#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *ptr,*head;
void insertbegin(){
    ptr=(struct node*)malloc(sizeof(struct node*));
    int item;
    if(ptr==NULL)
    {
        printf("\nNODE IS NOT AVAILABLE");
    }
    else
    {
        printf("\nEnter the value:");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\nnode inserted");
    }
}
void insertend(){
    struct node *temp;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL)
    {
        printf("\nNODE IS NOT AVAILABLE");
    }
    else
    {
        printf("\nEnter the value");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
            printf("\nnode inserted");
        }
        else
        {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;
        printf("\nnode inserted");   
        }
    }
}

void insertmiddle()
{
    int item,loc;
    struct node *temp;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL)
    {
        printf("\nNODE IS NOT AVAILABLE");
    }
    else
    {
        printf("\nenter the value");
        scanf("%d",&item);
        ptr->data=item;
        printf("\nEnter the location after which you want to insert: ");
        scanf("%d",&loc);
        temp=head;
        for(int i=0;i<loc;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("\ncannot insert node ");
                return;
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("\nnode inserted");
    }
}

void deletebegin(){
    if(head==NULL)
    {
        printf("List is empty");

    }
    else{
        ptr=head;
        head=ptr->next;
        free(ptr);
    }
}

void deleteend(){
    struct node *temp;
    if(head==NULL)
    {
        printf("Empty");
    }
    else if(head->next==NULL){
        head=NULL;
        free(head);

    }
    else{
        ptr=head;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        free(ptr);
    }
}

void deleteloc(){
    int loc;
    struct node *temp;
    printf("Enter the loc");
    scanf("%d",&loc);
    ptr=head;
    for(int i=0;i<loc;i++)
    {
        temp=ptr;
        ptr=ptr->next;
        if(ptr==NULL)
        {
            printf("cannot delete");
            return;
        }
        
    }
    temp->next=ptr->next;
    free(ptr);
}
void display()
{
    ptr=head;
    if(ptr==NULL)
    {
        printf("\nNothing to print");
    }
    else{
        printf("\nprinting values\n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}

void main()
{
    int choice;
    while (choice!=8)
    {
    printf("\n1.InsertBegin\n2.InsertEnd\n3.InsertAtLocation\n4.DeleteBegin\n5.DeleteEnd\n6.DeleteAtLocation\n7.Display\n8.Exit\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: insertbegin();
        break;
    case 2: insertend();
        break;
    case 3: insertmiddle();
        break;
    case 4: deletebegin();
        break;
    case 5: deleteend();
        break;
    case 6: deleteloc();
        break;
    case 7: display();
        break;
    case 8: printf("\nExiting...");
        break;
    default:printf("\ninvalid input");
        break;
    }
    }
}