#include<stdio.h>
void main()
{
    int n1,n2;
    printf("\n enter first number");
    scanf("%d",&n1);
    printf("eneter second number");
    scanf("%d",&n2);
    switch(n1>n2)
    {
        case 0 : printf("\n number %d is maximum",n2);
        break;
        case 1 : printf("\n  number %d is maximum",n1);
        break;
    }
}