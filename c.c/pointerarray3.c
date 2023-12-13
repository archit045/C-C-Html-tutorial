#include<stdio.h>
void main()
{
    int a[5],*p,i;
    p=a;
    printf("\n Enter Elements Of Array Using Pointer");
    for(i=0;i<5;i++)
    {
        printf("\n Address of a[%d]=%u",i,p+i);
    }
}