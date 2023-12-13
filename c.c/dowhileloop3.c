#include<stdio.h>
void main()
{
    int  n;
    int count=0;
    printf("\n enetr any number");
    scanf("%d",&n);
    do
    {
       count ++;
        n/=10;
    }while (n!=0);
    printf("\n total digits=%d",count);
    
}