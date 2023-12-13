#include<stdio.h>
void main()
{
    int fact(int);
    int n,i,f;
    printf("\n Enter any value:");
    scanf("%d",&n);
    f=fact(n);
    printf("\n factorial of %d is %d",n,f); 
}
int fact(int n)
{
    if(n==0)
    return 1;
    else 
    return (n*fact(n-1));
}