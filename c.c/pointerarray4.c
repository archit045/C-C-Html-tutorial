#include<stdio.h>
void main()
{
    int a[10],*p,i,sum=0;
    p=a;
    printf("\n Enter Elements Of Array Using Pointer");
    for(i=0;i<10;i++)
    {
        printf("\n Enter Element at a[%d]:",i);
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    printf("\n sum=%d",sum);
}