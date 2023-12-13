#include<stdio.h>
void main()
{
    struct student
  {
    char name[20];
    int rollno;
    float marks;
  };
    struct student s1;
    printf("\n Input In structure:");
    printf("\n Enter Name:");
    scanf("%s",&s1.name);
    printf("\n Enter Roll Number:");
    scanf("%d",&s1.rollno);
    printf(" Enter Marks:");
    scanf("%f",&s1.marks);
    printf("\n Name:%s",s1.name);
    printf("\n Roll Number:%d",s1.rollno);
    printf("\n Marks:%f",s1.marks);
}
