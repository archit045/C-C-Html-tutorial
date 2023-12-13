#include<stdio.h>
void main()
{
    int y;
    printf("Enter any year:");
    scanf("%d",&y);
    if(y%4==0)
    {
        printf("\n  Number %d is a leap year",y);
    }else
    {
       printf("\n Number %d is not a leap year",y);
    }
}