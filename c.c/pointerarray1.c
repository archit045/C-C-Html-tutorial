#include<stdio.h>
int main()
{
   int a[3];
   a[0]=10;
   a[1]=20;
   a[2]=30;
   int *ptr;
   ptr=a;
   for(int i=0;i<3;i++)
   {
        printf("\n The Value Of Array is %d",a[i]);
        printf("\n The Address Of ptr is%p",ptr);
        printf("\n The Address Of ptr is%d",*ptr);
   }
}