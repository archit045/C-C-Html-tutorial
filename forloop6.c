#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("\n enter n ");
    scanf("%d",&n);
    for (i=0;i<=n;i+=2)
    {
        sum+=i;
        printf("\n sum of all even number between 1 to %d =%d",n,sum);

    }
}