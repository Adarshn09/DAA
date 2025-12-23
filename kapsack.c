#include<stdio.h>
void main()
{
    int n,i,j,capacity;
    float ratio[20],temp;
    int profit[20],weight[20];

    printf("Enter the number of items:");
    scanf("%d",&n);
    printf("Enter the profit:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&profit[i]);

    }
     printf("Enter the weight:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&weight[i]);
        
    }
    printf("Enter the capacity:");
    scanf("%d",&capacity);
 for ( i = 0; i < n; i++)
    {
       ratio[i]=(float)profit[i]/weight[i];

    }

    for ( i = 0; i< n-1; i++)
    {
      for(j=i+1;j<n;j++)
      {
        if (ratio[i]<ratio[j])
        {
            temp=ratio[i];
            ratio[i]=ratio[j];
            ratio[j]=temp;

            temp=profit[i];
            profit[i]=profit[j];
            profit[j]=temp;

            temp=weight[i];
            weight[i]=weight[j];
            weight[j]=temp;
        }
      }
    }
    float totalprofit=0.0;

for ( i = 0; i < n; i++)
{
    if (capacity==0)
    {
        break;
    }
    if (weight[i]<=capacity)
    {
        totalprofit+=profit[i];
        capacity-=weight[i];
    }else
    {
        totalprofit+=ratio[i]*capacity;
        capacity=0;
    }
}
printf("maximum profit is:%.2f",totalprofit);
}
// output:
// Enter the number of items:4
// Enter the profit:42 12 40 25
// Enter the weight:7 3 4 5
// Enter the capacity:10
// maximum profit is:76.00