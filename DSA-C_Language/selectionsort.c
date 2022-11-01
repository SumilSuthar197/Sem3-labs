#include<stdio.h>
// Selection Sort

// Time complexity
// Best: O(n^2)
// Average: O(n^2)
// Worst: O(n^2)

// Space complexity: O(1)
void selectionsort(int a[],int n)
{
    int i,j,temp,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}

void main(){
    int n;
    printf("enter no of elements to be sort: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements to sort:\n");
    for(int k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    selectionsort(a,n);
    printf("Elements after sort:\n");
    for(int k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
}