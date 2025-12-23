#include<stdio.h>
void main()
{int i,j,n,cost[20][20];
    printf("Enter the number of  vertx:");
    scanf("%d",&n);
    printf("Enter the adjacency matrix (use 999 for no edge)\n");
     for ( i = 0; i < n; i++)
     {
        for(j=0;j<n;j++)
        {
            scanf("%d",&cost[i][j]);
        }
     }
     int visited[20]={0};
     visited[0]=1;
     int ne=0,u=0,v=0,min=0,totalcost=0;

     while (ne<n-1)
     {
        min=999;
        for ( i=0; i< n;i++)
        {
            if (visited[i])
            {
                 for(j=0;j<n;j++)
                 {
                    if (!visited[j]&&cost[i][j]<min)
                    {
                        min=cost[i][j];
                        u=i;
                        v=j;
                    }
                 }
            }
        }
        visited[v]=1;
        printf("%d-->%d cost:%d\n",u,v,min);
        totalcost+=min;
        ne++;

     }
     printf("total cost of MST:%d",totalcost);


}

// output
// Enter the number of  vertx:4
// Enter the adjacency matrix (use 999 for no edge)
// 0 1 5 2
// 1 0 999 999
// 5 999 0 3
// 2 999 3 0
// 0-->1 cost:1
// 0-->3 cost:2
// 3-->2 cost:3
// total cost of MST:6