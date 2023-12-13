#include<stdio.h>
void main()
{
    int n;
    printf("\n enetr a number");
    scanf("%d",&n);
    switch (n%2)
    {
        case 0 : printf("\n number %d is even",n);
        break;
        case 1 : printf("\n number %d is odd",n);
        break;
    }
}