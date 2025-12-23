#include<stdio.h>
void main()
{
int n,i,key,a[20],result=-1;

 printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the search element:");
    scanf("%d",&key);

    int low=0,high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (key==a[mid])
        {
            result=mid;
            break;
        }else if (key<a[mid])
        {
            high=mid-1;
        }else
        {
            low=mid+1;
        }
    }
    if (result==-1)
    {
        printf("Element not found");
    }else
    {
        printf("Element Found at position:%d",result);
    }
}

// output:
// Enter the number of elements:5
// Enter the array elements:
// 10 20 30 40 50
// Enter the search element:40
// Element Found at position:3