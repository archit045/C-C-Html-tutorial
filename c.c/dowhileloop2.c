#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("\n enter upto ehich number you want sum");
    scanf("%d",&n);
    i=1;
    do
    {
        sum=sum+i;
        i++;
    }while (i<=n);
    printf("\n sum of first %d number=%d",n,sum);
    
    
}
