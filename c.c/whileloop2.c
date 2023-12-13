#include<stdio.h>
void main()
{
    int n,rev=0,num;
    printf("Enter any number :");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
        printf("\n Reverse of%d is %d",num,rev);
    }
}