// C programme to read a file and display file contents character by character using fgetc()
#include<stdio.h>
int main()
{
    FILE*fptr;
    char ch;
    fptr=fopen("C","r");
    if(fptr==NULL)
    {
    printf("Unable to open file.\n");
    printf("Please Check Whether file Exists and you have read privilage,\n");
    printf("Exit_failure");
   }
      printf("File opend successfully.Reading File Contents Character By Character.\n");
      do
      {
        ch=fgetc(fptr);
        putchar(ch);
      } while (ch!=EOF);
      fclose(fptr);
      return 0;
}
        