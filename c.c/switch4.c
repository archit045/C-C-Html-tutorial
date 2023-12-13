#include<stdio.h>
void main()
{
    int n;
    printf("\n enetr number");
    scanf("%d",&n);
    switch(n>0)
    {
        case 1 : printf("\n number %d is positive",n);
        break;
        case 0 : switch(n<0)
        {
            case 1 : printf("\n number %d is negeatve",n);
            break;
            case 0 : printf("\nnumber %d is zero",n);
            break;
        }
        break;
    }
}