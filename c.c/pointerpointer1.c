#include<stdio.h>
void main()
{
    int a=10;
    int *p1,**p2;
    p1=&a;
    p2=&p1;
    printf("\n Value of a=%d",a);
    printf("\n Value of a through pointer p1=%d",*p1);
    printf("\n Value of a through pointer p2=%d",**p2);
    printf("\n Address of a=%p",&a);
    printf("\n Address of p1=%p",&p1);
    printf("\n Address of p2=%p",&p2);
    printf("\n Value of p1 that is address of a=%p",p1);
    printf("\n Value of p2 that is address of a=%p",p2);
}