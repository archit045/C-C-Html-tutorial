#include<stdio.h>
void main()
{
    int n,prime=1,i;
    printf("Enter any Number :");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
     {
        prime=0;
        break;
     }
    }
    if(prime==1&&n>1)
    printf("\n number %d is prime number",n);
    else 
    printf("\n number %d is not prime",n);
}