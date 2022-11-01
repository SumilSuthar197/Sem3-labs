#include<stdio.h>
// Bubble Sort Algorithm

// Time complexity
// Best: O(n)
// Average: O(n^2)
// Worst: O(n^2)

// Space complexity: O(1)
void BubbleSort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
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
    BubbleSort(a,n);
    printf("Elements after sorting:\n");
    for(int k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }

}