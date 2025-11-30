#include<stdio.h>
int parent[20];
int find(int i)
{
    while(parent[i]!=i)
    i=parent[i];
return i;
}
void unite(int a, int b)
{
    parent[b]=a;
}
int main()
{
    int n,cost[20][20];
    printf("Enter the vetex:\n");
    scanf("%d",&n);
    printf("Enter the adjacent matrix:\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
        }
    }

    for(int i=1;i<=n;i++)
    {
        parent[i]=i;
    }
    int edge=0,mincost=0;
    printf("edges in MST\n");
    while(edge<n-1)
    {
        int min=999,a=-1,b=-1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(cost[i][j]<min && cost[i][j]!=0)
                {
                    min=cost[i][j];
                    a=i;
                    b=j;

                }
            }
        }
        int u=find(a);
        int v=find(b);
        if(u!=v)
        {
            printf("%d-->%d = %d\n",a,b,min);
            mincost+=min;
            unite(u,v);
            edge++;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("\nminimum cost of MST:%d",mincost);
    return 0;
}