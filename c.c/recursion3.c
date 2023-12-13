#include<stdio.h>
int sod(int num);
int main()
{
    int num,sum;
    printf("\n Enter Any Number to Finf Sum Of digits");
    scanf("%d",&num);
    sum=sod(num);
    printf("Sum of Digits of %d=%d",num,sum);
    return 0;
}
int sod(int num)
{
    if(num==0)
    return 0;
    else
    return((num%10)+sod(num/10));
}