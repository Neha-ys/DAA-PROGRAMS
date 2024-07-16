#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int main()
{
    int i,n,a[MAX];
    printf("\n read the value for n");
    scanf("%d",&n);
    printf("\n read array elements\n");
    for(i=1;i<=n;i++)
       scanf("%d",&a[i]);
    heapify(a,n);
    heapsort(a,n);
    printf("\n sorted elements are\n ");
    for(i=1;i<=n;i++)
        printf("%d\t",a[i]);
    return 0;
}
void heapify(int a[MAX],int n)
{
    int i,j,k,v,flag;
    for(i=n/2;i>=1;i--)
    {
      k=i;
      v=a[k];
      flag=0;
      while(!flag && 2*k<=n)
      {
          j=2*k;
          if(j<n)
          {
              if(a[j]<a[j+1])
                j=j+1;

          }
          if(v>=a[j])
            flag=1;
          else
          {
              a[k]=a[j];
              k=j;
          }

      }
      a[k]=v;
    }
}
void heapsort(int a[MAX],int n)
{

    int i,temp;
    for(i=n;i>1;i--)
    {
        temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        heapify(a,i-1);
    }
}
