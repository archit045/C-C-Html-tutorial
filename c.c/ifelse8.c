#include<stdio.h>
void main()
{
    int b,h,ch;
    float a,r;
    printf("\n 1. Area of triangle :\n 2. Area of Circle :");
    printf("Enter your Choice :");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\n **You Selected Area Of Triangle**");
        printf("\n Enter Base");
        scanf("%d",&b);
        printf("Enter Height:");
        scanf("%d",&h);
        a=.5*b*h;
        printf("Area of Triangle=%f",a);
    }if(ch==2)
    {
       printf("\n You Selected Area of Circle ");
       printf("\n Enter Radius");
       scanf("%f",&r);
       a=3.14*r*r;
       printf("Area of Circl=%f",a);
    }
}