#include<stdio.h>
// Merge Sort

// Time complexity
// Best: O(n log(n))
// Average: O(n log(n))
// Worst: O(n log(n))

// Space complexity: O(n)

void merge(int a[],int low,int mid,int high)
{
    int b[100];
    int i=low,j=mid+1,k=low;

    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }


    while(i<=mid){
        b[k++]=a[i++];
    }

    while(j<=high){
        b[k++]=a[j++];
    }

    for(int i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}

void Mergesort(int a[],int low,int high){
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        Mergesort(a,low,mid);
        Mergesort(a,mid+1,high);
        merge(a,low,mid,high);
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
    Mergesort(a,0,n-1);
    printf("Elements after sorting:\n");
    for(int k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
}