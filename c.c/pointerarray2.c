#include<stdio.h>
void main()
{
    int a[5],*p,i;
    p=a;
    {
        printf("\n Enter Elements of array Using Pointer");
        for(i=0;i<5;i++)
        {
            printf("\n Element a[%d]:",i);
            scanf("%d",p+i);
        }
         for(i=0;i<5;i++)
         {
            printf("\n Element a[%d]=%d",i,*(p+i));
         }
     }
}