#include<stdio.h>
void main()
{
    int a=10,b=20,c=20;
    {
        printf("\n (a>b)&&(b==c)=%d",(a>b)&&(b==c));
        printf("\n (a<b)||(c>a)=%d",(a<b)||(c>a));
        printf("\n (a==b)&&(b>c)=%d",(a==b)&&(b>c));
        printf("\n (c>b)||(c>a)=%d",(c>b))||(c>a);
        printf("\n !(c<b)=%d",!(c<b));
        printf("\n !(b==c)=%d",!(b==c));
        printf("\n (b>a)&&(b==c)=%d",(b>a)&&(b==c));
}
}