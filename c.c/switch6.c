#include<stdio.h>
void main()
{
    int n;
    printf("\n enter any number");
    scanf("%d",&n);
    switch (n)
    {
        case 1:printf("\n number %d is monday",n);
        break;
        case 2:printf("\n number %d is tuesay",n);
        break;
        case 3:printf("\n numbe =%d is wednesday",n);
        break;
        case 4:printf("\n number %d is thursday",n);
        break;
        case 5:printf("\n number %d is friday",n);
        break;
        case 6:printf("\n number %d is saturday",n);
        break;
        case 7:printf("\n number %d is sunday",n);
        break;
    }
}