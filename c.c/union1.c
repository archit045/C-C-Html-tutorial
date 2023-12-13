#include<stdio.h>
void main()
{
    union student
  {
    char name[20];
    int rollno;
    float marks;
  }s;
    printf("\n Input In structure:");
    printf("\n Enter Name:");
    scanf("%s",&s.name);
    printf("\n Enter Roll Number:");
    scanf("%d",&s.rollno);
    printf(" Enter Marks:");
    scanf("%f",&s.marks);
    printf("\n Name:%s",s.name);
    printf("\n Roll Number:%d",s.rollno);
    printf("\n Marks:%f",s.marks);
}
