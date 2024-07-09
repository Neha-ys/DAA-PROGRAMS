#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count;
void bfsm(char T[20],char P[10])
{
    int m,n,i,j;
    n=strlen(T);
    m=strlen(P);
    for(i=0;i<=n-m;i++)
    {
        j=0;
        count++;
        while(j<m && P[j]== T[i+j])
        {
            j=j+1;
        }
        if(j==m)
            return (i+1);
    }
    return 1;
}
int main()
{
    char T[20],P[20],flag;
    printf("\n Enter the text:");
    scanf("%s",&T);
    printf("\n Enter the pattern to serach");
    scanf("%s",&P);
    flag=bfsm(T,P);
    if(flag==-1)
        printf("\n Pattern is found");
    else
        printf("Pattern at the position %d",(flag));
    return 0;
}
