//passing pointer as function argument
//passing pointer/address in function or call by refrence
#include<stdio.h>
void main()
{
     int a=10,b=20;
    void add10(int*,int*);
    printf("\n before function call a=%d\tb=%d",a,b);
    add10(&a,&b);
    printf("\n After Function Call a=%d\tb=%d",a,b);
}
void add10(int*x,int*y)
{
   *x=*x+10;
   *y=*y+10;
   printf("\n Inide Function a=%d\tb=%d",*x,*y);
}