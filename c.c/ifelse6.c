#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n Number %d is even",n);
    }else
    {
       printf("\n number %d is odd",n);
    }
}