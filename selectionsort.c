#include<stdio.h>
void main()
{
    int a[20],i,j,n,min,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
for ( i = 0; i< n-1; i++)
{min=i;
    for(j=i+1;j<n;j++)
    { 
        if (a[j]<a[min])
        {
           min=j; 
        }
    }
     temp=a[i];
    a[i]=a[min];
    a[min]=temp;
}
printf("After sorting:\n");
 for ( i = 0; i < n; i++)
 {
    printf("%d\n",a[i]);
 }
}

// output:
// Enter the number of elements:5
// Enter the array elements:
// 78
// 54
// 34
// 12
// 98
// After sorting:
// 12
// 34
// 54
// 78
// 98