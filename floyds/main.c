#include <stdio.h>
#include <stdlib.h>
int min(int A,int B)
{
    if(A<B)
        return A;
    else
        return B;
}
void floyd(int A[10][10],int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        A[i][j]=min(A[i][j],A[i][k]+A[k][j]);
}
int main()
{
    int n,A[10][10],i,j;
    printf("Read number of nodes");
    scanf("%d",&n);
    printf("\n Read cost matrix\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        scanf("%d",&A[i][j]);
    floyd(A,n);
    printf("\n All pair shortest path is:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
