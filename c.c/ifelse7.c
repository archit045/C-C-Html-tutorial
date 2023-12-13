#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("\n  Number %d is positive",n);
    }else
    {
       printf("\n Number %d is negative",n);
    }
}