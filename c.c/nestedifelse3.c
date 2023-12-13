#include<stdio.h>
void main()
{
    int cp,sp,p,l;
    printf("\n Enter cost Price:");
    scanf("%d",&cp);
    printf("\n Enter Sale Price :");
    scanf("%d",&sp);
    if(cp>sp)
    {
        l=cp-sp;
        printf("\n Loss=%d",l);
    }else
    {
       printf("\n No profit np loss ");
    }
}