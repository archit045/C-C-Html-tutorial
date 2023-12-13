#include<stdio.h>
void main()
{
    int u;
    printf("Enter the Unity Bill:");
    scanf("%d",&u);
    if(u>=1000)
    {
        printf("\n%d",u*10);
    }else if (u>=700&&u<=999)
    {
       printf("\n%d",u*8);
    }else if (u>=500&&u<=699)
    {
        printf("\n%d",u*6);
    }else if (u>=200&&u<=499)
    {
        printf("\n%d",u*5);
    }else if(u>=100&&u<=199)
    {
        printf("\n%d",u*4);
    }else if(u>=99)
    {
        printf("\n%d",u*2);
    }else
    {
        printf("Please Enter valid Consumed Unit");
    }
}