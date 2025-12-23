#include<stdio.h>
int a[20],min,max;
void min_max(int low,int high)
{
    int min1,min2,max1,max2;

    if (low==high)
    {
        min=max=a[low];
    }else if (low==high-1)
    {
        if (a[low]<a[high])
        {
            min=a[low];
            max=a[high];
        }else
        {
            min=a[high];
            max=a[low];
        }
    }else
    {
        int mid=(low+high)/2;
        min_max(low,mid);
        min1=min;
        max1=max;
        min_max(mid+1,high);
        min2=min;
        max2=max;

        if (min1<min2)
        {
            min=min1;
        }else
        {
            min=min2;
        }

        if (max1>max2)
        {
            max=max1;
        }else
        {
            max=max2;
        }

    }
}

void main()
{
    int i,j,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    min_max(0,n-1);
    printf("Minimum:%d Maximum:%d",min,max);
}
// output:
// Enter the number of elements:5
// Enter the array elements:
// 78
// 54
// 23
// 12
// 87
// Minimum:12 Maximum:87