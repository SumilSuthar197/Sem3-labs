#include<stdio.h>

#define table_size 7
int H[table_size];

void display(){
    for(int i=0;i<table_size;i++)
    {
        printf("\nAt index %d, value=%d",i,H[i]);
    }
}

void insert(){
    int key,hkey,i,index;
    printf("\nEnter the value wou want to insert:");
    scanf("%d",&key);
    hkey=key%table_size;
    for(i=0;i<table_size;i++)
    {
        index=(hkey+(i*i))%table_size;
        if(H[index]==NULL)
        {
            H[index]=key;
            break;
        }
    }
    if(i==table_size)
    {
        printf("\ncannot insert");
    }
}

void search(){
    int key,hkey,i,index;
    printf("\nenter the number to be search:");
    scanf("%d",&key);
    hkey=key%table_size;
    for(i=0;i<table_size;i++)
    {
        index=(hkey+(i*i))%table_size;
        if(H[index]==key)
        {
            printf("\nFound");
            break;
        }
    }
    if(i==table_size)
    {
        printf("\nvalue is not found");
    }
}

void main()
{
    int Choice;
    while(Choice!=4)
    {
        printf("\nPress 1. Insert\t 2. Display \t3. Search \t4.Exit \n");
        scanf("%d", &Choice);
        switch (Choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            printf("Exiting...");
        }
    }
}