// C programme to Create a file and write data into file 
#include<stdio.h>
int main()
{
     char data[100];
    FILE*fptr;
    fptr=fopen("c","w");
    if(fptr==NULL)
    {
    printf("Unable to Create file.\n");
    printf("Exit_failure");
   }
      printf("Enter Contents to store in file\n");
      fgets(data,100,stdin);
      fclose (fptr);
      printf("File Created and saved Successfully\n");
      return 0;
}        