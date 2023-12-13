// C programme to Create a file and write data into file 
#include<stdio.h>
int main()
{
     FILE*fp;
     char str[80];
     fp=fopen("a.c","a");
    
    printf("Enter Your Message:\n");
    gets(str);
    printf(fp,"%s",str);
    printf("Your Message is appended in file");
    return 0;
}        