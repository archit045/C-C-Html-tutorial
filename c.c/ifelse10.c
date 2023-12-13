#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("\n  Number %d is Divisible by 5",n);
    }else
    {
       printf("\n Number %d is Not Divisible by 5",n);
    }
}