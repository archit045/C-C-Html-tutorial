#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter Value Of A:");
    scanf("%d",&a);
    printf("Enter Value Of B:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("A is greater\n");
        printf("B=%d",a);
    }else
    {
        printf("B is greater\n");
        printf("B=%d",b);
    }
    
}