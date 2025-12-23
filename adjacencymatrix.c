#include<stdio.h>
void main()
{
    int e,v,src,dest,i,j;
    printf("Enter the vertex:");
    scanf("%d",&v);
    printf("Enter the edge:");
    scanf("%d",&e);
    int adj[v][v];
     for ( i = 0; i < v; i++)
     {
        for(j=0;j<v;j++)
        {
            adj[i][j]=0;
        }
     }

     printf("Enter the edge (src and dest)");
     for ( i = 0; i < e; i++)
     {
        scanf("%d %d",&src,&dest);
        adj[src][dest]=1;
        adj[dest][src]=1;
     }
     printf("Adjacency matrix is:\n");
     for ( i = 0; i < v; i++)
     {
        for(j=0;j<v;j++)
        {
            printf("%d\t",adj[i][j]);
        }
        printf("\n");
    }
    


}
// output:
// Enter the vertex:4
// Enter the edges:4
// Enter the edges (src and dest):
// 0 1
// 0 2
// 0 3
// 2 3
// Adjacency matrix:
// 0       1       1       1
// 1       0       0       0
// 1       0       0       1
// 1       0       1       0