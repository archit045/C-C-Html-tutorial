#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("\n Value OF a=%d",a);
    printf("\n Address of a =%p",&a);
    printf("\n Value Of a Using Pointer=%d",*p);
    printf("\n Address of a stored in p=%p",p);
}