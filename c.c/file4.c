// C programme to read a file and display file contents character by character using fgetc()
#include<stdio.h>
int main()
{
    char name[50];
    int marks,i,n;
    printf("\n Enter number of students:");
    scanf("%d",&n);
    FILE*fptr;
    fptr=(fopen("C","w"));
    if(fptr==NULL)
    {
    printf("Error!\n");
     }
   for(i=0;i<n;i++)
   {
      printf("For Student %d\n Enter Name:",i+1);
      scanf("%s",&name);
      printf("Enter MArks:");
      scanf("%d",&marks);
      printf("\n Name=%s\nMarks=%d\n",name,marks);
      }
      fclose(fptr);
      return 0;
}
        