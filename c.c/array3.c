#include<stdio.h>
void main()
{
    int a[100],n,i,pos;
    printf("\n Input Size Of Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter element at a[%d]position",i);
        scanf("%d",&a[i]);
    }
        printf("\n Enter Element Position to be deleted:");
        scanf("%d",&pos);
        if(pos<0||pos>n)
        printf("\n Invalis Position");
        else
        for(i=pos-1;i<n-1;i++)
    {
       a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("\n %d\t",a[i]);
}
    }