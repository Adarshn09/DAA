#include<stdio.h>
int a[20];
int partition(int lb,int ub)
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while (start<end)
    {
        while (a[start]<=pivot)
        {
            start++;
        }
        while (a[end]>pivot)
        {
            end--;
        }
        if (start<end)
        {
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    int temp1=a[lb];
    a[lb]=a[end];
    a[end]=temp1;
    return end;
}
void quicksort(int lb,int ub)
{
    if (lb<ub)
    {
        int loc=partition(lb,ub);
        quicksort(lb,loc-1);
        quicksort(loc+1,ub);
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

    quicksort(0,n-1);

    printf("After sorting:\n");
 for ( i = 0; i < n; i++)
 {
    printf("%d\n",a[i]);
 }

}

// output:
// Enter the number of elements:5
// Enter the array elements:
// 76
// 99
// 65
// 23
// 12
// After sorting:
// 12
// 23
// 65
// 76
// 99
