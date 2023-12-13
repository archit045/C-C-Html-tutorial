#include<stdio.h>
void main()
{
    struct student
{
    char name[20];
    int rollno;
    float marks;
}
  s,*p;
  p=&s;
  printf("\n Input in strcture");
  printf("\n Enter Name :");
  scanf("%s",&p->name);
  printf("\n Enter Roll Number :");
  scanf("%d",&p->rollno);
  printf("\n Enter Marks :");
  scanf("%f",&p->marks);
  printf("\n Output in Structure");
  printf("\n Name=%s",p->name);
  printf("\n Roll Number=%d",p->rollno);
  printf("\n Marks=%f",p->marks);
}