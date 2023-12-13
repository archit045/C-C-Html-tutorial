#include<stdio.h>
void main()
{
    int a[100],i,n,sum=0;
    float avg;
    printf("\n Input Size Of Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter Elements at a[%d]position :",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\n sum=%d",sum);
    avg=sum/n;
    printf("\n Average=%2f",avg);
}