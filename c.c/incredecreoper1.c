#include<stdio.h>
void main()
{
    int a=10,b=20,x;
    a++;
        printf("\n (a++) increment value of a=%d",a);
        ++a;
        printf("\n (++a) increment value of a=%d",a);
        b--;
        printf("\n (b--) decrement value of b=%d",b);
        --b;
        printf("\n (--b) decrement value of b=%d",b);
        b++;
        printf("\n (b++) increment value of b=%d",b);
        x=a++;
        printf("\n x=%d",x);
        printf("\n a=%d",a);
        x=++a;
        printf("\n x=%d",x);
        printf("\n a=%d",a);
}
