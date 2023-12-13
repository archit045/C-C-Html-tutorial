#include<stdio.h>
void main()
{
    int first,last,num,sum=0;
    printf("Enter the Number :");
    scanf("%d",&num);
    last=num%10;
    printf("last=%d\n",last);
    while(num>10)
    {
        num=num/10;
    }
    first=num;
    printf("first=%d\n",first);
    sum=first+last;
    printf("sum=%d",sum);
}