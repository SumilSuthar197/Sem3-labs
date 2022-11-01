#include<stdio.h>

void linear(int a[],int n)
{
    int num,i;
    printf("\nEnter the number you want to search:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            printf("\nNumber %d found at %d index",num,i);
            break;
        }
    }
    if(i==n)
    {
        printf("\nNot found");
    }
}

void binary(int a[],int start,int end,int key)
{
    int  mid; 
    if(start<=end)
    {
        mid = (start+end)/2;
        
        if(a[mid]==key)
        printf("NUMBER found at %d index",mid);

        if(a[mid]<key)
        binary(a,mid+1,end,key);

        if(a[mid]>key)
        binary(a,start,mid-1,key);
    }
    else{
        printf("\nnot found");
    }
}


void main()
{
    
    int choice,key;
    int a[] = {2,4,6,8,10,12,14,16,18,20};
    int n = 10;
    printf("SEARCHING\n");
    printf("1.linear search\n2.binary search\n3.exit");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        linear(a,n);
        break;
        case 2:
        printf("ENTER THE VALUE TO BE SEARCHED\n");
        scanf("%d",&key);
        binary(a,0,n-1,key);
        break;
        case 3:
        printf("\nExiting....");
        default:
        printf("\ninvalid input");
    }
}

