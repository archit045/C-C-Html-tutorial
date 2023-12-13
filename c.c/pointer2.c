#include<stdio.h>
void main()
{
    int a,b,c;
    int *p1=&a;
    int *p2=&b;
    printf("\n Enter Value Of A And B:",a,b);
    scanf("\n%d%d",&a,&b);
    c=*p1+*p2;
    printf("\n Addition Of %d and %d is=%d",*p1,*p2,c);
    c=*p1-*p2;
    printf("\n Substraction Of %d and %d is=%d",*p1,*p2,c);
    c=*p1**p2;
    printf("\n Multiplication  Of %d and %d is=%d",*p1,*p2,c);
    c=*p1%*p2;
    printf("\n Module Of %d and %d is=%d",*p1,*p2,c);
    }
