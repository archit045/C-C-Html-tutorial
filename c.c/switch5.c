#include<stdio.h>
void main()
{
     char ch;
     printf("\n enetr any alphabet",ch);
     scanf("%c",&ch);
     switch(ch)
     { 
       case 'a' :
       case 'e' :
       case 'i' :
       case 'o' :
       case 'u' :
       case 'A' :
       case 'E' :
       case 'I' :
       case 'O' :
       case 'U' : printf("\n vowel");
                  break;
       default  :printf("\n constant");
       break;
     }
}