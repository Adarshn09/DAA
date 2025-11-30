#include<stdio.h>
void main()
{
    int n,i,j,m;
    float  ratio[10],x[10],w[10],p[10],temp,profit=0;

    printf("Enter the number of  items:");
    scanf("%d",&n);
    printf("Enter the weights:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&w[i]);

    }
    printf("Enter the profit:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&p[i]);
        
    }
    printf("Enter the Knapsack capacity :");
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        ratio[i]=p[i]/w[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp=ratio[i];
                ratio[i]=ratio[j];
                ratio[j]=temp;


                temp=w[i];
                w[i]=w[j];
                w[j]=temp;


                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        x[i]=0;
    }

    for(i=0;i<n;i++)
    {
        if(w[i]>m)
        {
            break;
        }
        x[i]=1;
        m-=w[i];
        profit+=p[i];

    }
    if(i<n)
    {
        x[i]=(float)m/w[i];
        profit+=x[i]*p[i];
    }
    printf("Maximum profit=%.2f\n",profit);
    printf("solution vector:\n");
    for(i=0;i<n;i++)
    {
        printf("%.2f",x[i]);
    }

}