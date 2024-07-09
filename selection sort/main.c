#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
void selectionsort(int A[size],int n)
{
    int i,j,min,temp;
    for(i=0;i<=n-2;i++)
    {
        min = i;
        for(j=i+1;j<=n-1;j++)
        {
            count++;
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
}
int main()
{
    int i,A[size],n;
    printf("\n Read array size:");
    scanf("%d",&n);
    printf("\n Read elements\n");
    for(i=0;i<=n-1;i++)
    scanf("%d",&A[i]);
    selectionsort(A,n);
    printf("\n Sorted elements are");
    for(i=0;i<=n-1;i++)
    printf("%d\t",A[i]);
    printf("\n Count=%d",count);
    return 0;
}

