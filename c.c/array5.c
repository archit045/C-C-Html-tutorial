#include<stdio.h>
void main()
{
    int a[5],i;
    printf("\n Input Elements in Array:");
    for(i=0;i<5;i++)
    {
        printf("\n Enter Elements at a[%d]position :",i);
        scanf("%d",&a[i]);
    }
    printf("\n Reverse Array is:");
    for(i=4;i>=0;i--)
    {
        printf("\n %4d",a[i]);
    }
}