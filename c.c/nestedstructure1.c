#include<stdio.h>
struct address
  {
    char city[20];
    int pin;
    char phone[14];
  }add;
     struct employee
  {
    char name[20];
    struct address add;
  }emp;
  void main()
  {
    printf("\nEnter Employee Name:");
    scanf("%s",&emp.name);
    printf("Enter City:");
    scanf("%s",&emp.add.city);
    printf("Enter PIN Code:");
    scanf("%d",&emp.add.pin);
    printf("Enter Phone Number:");
    scanf("%s",&emp.add.phone);
    printf("\n Name:%s",emp.name);
    printf("\n City:%s",emp.add.city);
    printf("\n Pin Code:%d",emp.add.pin);
    printf("\n Phone Number:%s",emp.add.phone);
  }
