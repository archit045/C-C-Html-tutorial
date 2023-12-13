#include<stdio.h>
void main()
{
    int age;
    printf("enter age ");
    scanf("%d",&age);
    if(age>=18)
    {   
      printf("\n you are eligible to vote");
    }else
    {
        printf("\n you are not eligible to vote");
    }
}