#include<stdio.h>
void main()
{
    struct student
  {
    char name[20];
    int rollno;
    struct dob
  {
     int dd,mm,yy;
     float marks;
  }dob;
  }s;
    printf("\n Input In structure:");
    printf("\nEnter Name Of Student:");
    scanf("%s",&s.name);
    printf("Enter Roll Number Of Student:");
    scanf("%d",&s.rollno);
    printf("Enter Date:");
    scanf("%d",&s.dob.dd);
    printf("Enter Month:");
    scanf("%d",&s.dob.mm);
    printf("Enter Year");
    scanf("%d",&s.dob.yy);
    printf("Enter Marks:");
    scanf("%f",&s.dob.marks);
    printf("\n Name:%s",s.name);
    printf("\n Roll Number:%d",s.rollno);
    printf("\n Date:%d",s.dob.dd);
    printf("\n Month:%d",s.dob.mm);
    printf("\n Year:%d",s.dob.yy);
    printf("\n Marks:%f",s.dob.marks);
}
