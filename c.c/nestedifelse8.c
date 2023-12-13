#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch>='Z'))
    {
        printf("\n %c is Character");
    }else if((ch>='0'&&ch>='9'))
    {
       printf("\n %c is digit");
    }else 
       {
        printf("\n %c is Symbol");
       }
}