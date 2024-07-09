#include <stdio.h>
#include <stdlib.h>
int max (int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int n,w[10],v[10],W,i,j,V[10][10],x[10]={0};

    printf("\n Read the number of objects");
    scanf("%d",&n);
    printf("\n Read the weight of objects\n");
    for(i=1;i<=n;i++)
        scanf("%d",&w[i]);
    printf("\n Read the profit of objects\n");
    for(i=1;i<=n;i++)
        scanf("%d",&v[i]);
    printf("\n Read the knapsack capacity");
    scanf("%d",&W);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=W;j++)
        {
            if(i==0||j==0)
                V[i][j]=0;
            else if(j<w[i])
                V[i][j]=V[i-1][j];
            else
                V[i][j]= max(V[i-1][j],V[i-1][j-w[i]]+v[i]);
            printf("%d\t",V[i][j]);
        }
        printf("\n");
    }
    printf("\n Maximum profit is %d",V[n][W]);
    i=n;
    j=W;
    while(i!=0 && j!=0)
    {
        if(V[i][j]!=V[i-1][j])
        {
            x[i]=1;
            j=j-w[i];
        }
        i=i-1;
    }
    printf("\n The objects that are included are\n");
    for(i=1;i<=n;i++)
    {
        if(x[i]==1)
        {
            printf("\n%d object is included",i);
        }
    }
    return 0;
}
