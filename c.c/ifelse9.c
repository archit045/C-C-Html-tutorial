#include<stdio.h>
void main()
{
    int marks;
    printf("Enter Marks:");
    scanf("%d",&marks);
    if(marks>=33)
    {
        printf("\n pass");
    }else
    {
       printf("\n Fail");
    }
}