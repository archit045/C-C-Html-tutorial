#include<stdio.h>
void main()
{
    int i,j,n,m;
    printf("Enter No of Rows :");
    scanf("%d",&n);
    printf("Enter Of Coulmn");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
    {if(i==1||i==n||j==1||j==n)
    {
        printf("*");
    }else
    {
    printf(" ");
    }
    }
    printf("\n");
}
}