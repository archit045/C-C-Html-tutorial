#include<stdio.h>
void main()
{
    int a[5],b[5],i;
    float avg;
    printf("\n Input Elements in Ist Array:");
    for(i=0;i<5;i++)
    {
        printf("\n Enter Elements at a[%d]position :",i);
        scanf("%d",&a[i]);
    }
    printf("\n Before Copy Ist Array is:");
    for(i=0;i<5;i++)
    {
        printf("\n Element at [%d]=%d",i,a[i]);
    }
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    printf("\n After Copy Ist Array is :");
    for(i=0;i<5;i++)
    {
        printf("\nElement at b[%d]=%d",i,b[i]);
    }
}