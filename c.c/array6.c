#include<stdio.h>
void main()
{
    int a[100],n,i,found=0,x;
    printf("\n Input Size Of Array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter Elements at a[%d]position :",i);
        scanf("%d",&a[i]);
    }
    printf("\n Enter searching Element :");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    printf("\n Element %d is Found At %d position:",x,i+1);
    else
    {
        printf("\nElement %d is not found",x);
    }
}