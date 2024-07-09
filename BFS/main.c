#include <stdio.h>
#include <stdlib.h>

void bfs(int a[10][10], int n,int v[10],int source)
{
    int q[10],rear=-1,front=0, i,delnode;
    v[source]=1;
    q[++rear]=source;
    while(front<=rear)
    {
        delnode=q[front++];
        for(i=1;i<=n;i++)
        {
            if(a[delnode][i] ==1 && v[i]==0)
            {
                q[++rear]=i;
                v[i]=1;
            }
        }
    }
}
int main()
{
    int n,a[10][10],i,j ,v[10],count=0;
    printf("\n Enter the number of nodes");
    scanf("%d",&n);
    printf("\n Read adjacent matrix");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
        v[i]=0;
    for(i=1;i<=n;i++)
    {
        if(v[i]==0)
        {
            bfs(a,n,v,i);
            count++;
        }

    }
    if(count==1)
        printf("\n Graph is connected,one component");
    else
        printf("\n Graph is not connected,%d component",count);
    return 0;
}
