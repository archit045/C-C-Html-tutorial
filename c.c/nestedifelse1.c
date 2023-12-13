#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("\n  Number %d is Negeative",n);
    }else if(n==0)
    {
       printf("\n Number %d is zero",n);
    }
    else
    {
        printf("Number %d is Positive",n);
    }
}