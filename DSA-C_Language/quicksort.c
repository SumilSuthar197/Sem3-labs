#include<stdio.h>
// Quick Sort 

// Time complexity
// Best: O(n log(n))
// Average: O(n log(n))
// Worst: O(n^2)

// Space complexity: O(n log(n))

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int partition(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l,j=h;

    do{
        do
        {i++;} while (a[i]<=pivot);
        do
        {j--;} while (a[j]>pivot);
        
        if(i<j){swap(&a[i],&a[j]);}
    }while(i<j);
    swap(&a[l],&a[j]);
    return j;
}
void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
        int j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}

void main()
{
    int n;
    printf("enter no of elements to be sort: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements to sort:\n");
    for(int k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    quicksort(a,0,n);
    printf("Elements after sort:\n");
    for(int k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }

}