#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter C:");
    scanf("%d",&c);
    if(a>b&&a>c)
    
        printf("\n A is greater");
    else if(b>a&&b>c)

       printf("\n B is greater ");
    else 
       printf("C Is Greater ");

}