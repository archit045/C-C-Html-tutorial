#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))
    {
        printf("\n Character %c is Alphabet",ch);
    }else
    {
       printf("\n character %c is not a Alphabet",ch);
    }
}