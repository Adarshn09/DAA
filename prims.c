//Prim's Algorithm
#include<stdio.h>
int main()
{
    int i,j,n;
    int cost[10][10];
    printf("Enter the vertex:\n");
    scanf("%d",&n);
    printf("Enter the adjacent matrix(999 for no edge)");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&cost[i][j]);
        }
    }
    int visited[10]={0};
    visited[0]=1;

    int ne=0;
    int min,u=0,v=0;
    int total=0;
    printf("Edeges in Minimum spanning tree:\n");
    while(ne<n-1)
    {
        min=999;
        for( i=0;i<n;i++)
        {
            if(visited[i])
            {
                for( j=0;j<n;j++)
                {
                    if(!visited[j]&&cost[i][j])
                    {
                        min=cost[i][j];
                        u=i;
                        v=j;
                    }
                }
            }
        }
        visited[v]=1;
        printf("%d--->%d cost=%d\n",u,v,min);
        total+=min;
        ne++;
    }
    printf("Total cost of MST is:%d",total);
    return 0;

}