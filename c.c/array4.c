#include<stdio.h>
void main()
{
    int a[5],b[5],temp[5],i; 
    printf("\n Input Elements in Ist Array:");
    for(i=0;i<5;i++)
    {
        printf("\n Enter Elements at a[%d]position :",i);
        scanf("%d",&a[i]);
    }
    printf("\n Input Elements in IInd Array:");
    for(i=0;i<5;i++)
    {
    printf("\n Element at b[%d]position:",i);
    scanf("%d",&b[i]);
    }
        printf("\n Before Exchange Ist Array is :");
        for(i=0;i<5;i++)
        {
           printf("\n%d",a[i]);
         }
      printf("\n Before Exchange IInd Array is :");
        for(i=0;i<5;i++)
        {
         printf("\n%d",b[i]);
        }
        for(i=0;i<5;i++)
    {
       temp[i]=a[i];
       a[i]=b[i];
       b[i]=temp[i];
    }
           printf("\n After Exchange Ist Array is :");
        for(i=0;i<5;i++)
        {
           printf("\n%d",a[i]);
        }
        printf("\n After Exchange IInd Array is :");
        for(i=0;i<5;i++)
        {
           printf("\n%d",b[i]);
        }
}