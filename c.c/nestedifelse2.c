#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
       { printf("\n  Number %c is vowel",ch);
    }
    else if((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))

  {
         printf("\n Number %c is consonent");
  }else
   { 
        printf("Character %c is not an alphabet");
   }
}