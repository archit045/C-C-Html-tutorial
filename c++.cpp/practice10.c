#include<stdio.h>
void main()
{
    int  i,j,n;
    printf("enetr number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=(2*i);j++)
    {
        printf("*");
    }
      printf("\n");
    }
}