#include<stdio.h>
void main()
{
    int a,b,temp;
        printf("\n Enter Value Of A:");
        scanf("%d",&a);
        printf("\n Enter Value Of B:");
        scanf("%d",&b);
        printf("\n Before Swap a=%d",a);
        printf("\n Before Swap b=%d",b);
        temp=a;
        a=b;
        b=temp;
        printf("\n After Swap a=%d",a);
        printf("\n After Swap b=%d",b);
}
