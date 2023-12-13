#include<stdio.h>
void main()
{
    int a,b,ch;
    float c;
    printf("enter 1 for add\n 2 for substract\n 3 for multiplication\n 4 for division\n");
    printf("\n enetr your choice");
    scanf("%d",&ch);
    printf("enter a");
    scanf("%d",&a);
    printf(" enter b");
    scanf("%d",&b);
    switch(ch)
    {
        case 1 : c=a+b;
        break;
        case 2 : c=a-b;
        break;
        case 3 : c=a*b;
        break;
        case 4 : c=a/b;
        break;
        default: printf("\n invalid option");
        break;
    }
        printf("result=%f",c);
}