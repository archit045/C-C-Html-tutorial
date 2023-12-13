#include<stdio.h>
void main()
{    
    int i;
    struct student
  {
    int rollno;
    float marks;
    char name[20];
  };
    struct student s[5];
    printf("\n Input In structure:");
    for(i=1;i<=5;i++)
    {
    printf("\n Enter Roll Number of %d Student:",i);
    scanf("%d",&s[i].rollno);
    printf(" Enter Marks of %d student:",i);
    scanf("%f",&s[i].marks);
    printf(" Enter Name of %d Student:",i);
    scanf("%s",&s[i].name);
    }
     printf("\n Output In structure:");
    for(i=1;i<=5;i++)
    {
    printf("\n Roll Number of %d student=%d",i,s[i].rollno);
    printf("\n Marks of %d student=%f",i,s[i].marks);
    printf("\n Name of %d student =%s",i,s[i].name);
}
}