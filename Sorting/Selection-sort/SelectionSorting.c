#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[30],i,j,n,min=0,temp=05;
    printf("Enter the no. of items in list: ");
    scanf("%d",&n);
    printf("Enter the list: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Before Sorting the order of items in list is:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
               min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("\nAfter Sorting the order of items in list is:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
