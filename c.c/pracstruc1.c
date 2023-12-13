#include<stdio.h>
struct Address
  {
    char city[20];
    char address[20];
    char hono[10];
    int  pin;
    }add;
    struct Myself
    {  
        char name[20];
        char faname[20];
        char moname[20];
        int  age;
        int  phono;
        struct Address add;
    }myse;
    void main()
    {
        printf("\nMY Name:");
        scanf("%s",&myse.name);
        printf("Fathers Name:");
        scanf("%s",&myse.faname);
        printf("Mothers Name:");
        scanf("%s",&myse.moname);
        printf("My Age:");
        scanf("%d",&myse.age);
        printf("My Phone Number:");
        scanf("%d",&myse.phono);
        printf("City:");
        scanf("%s",&myse.add.city);
        printf("My Permanent Address:");
        scanf("%s",&myse.add.address);
        printf("My House Number:");
        scanf("%d",&myse.add.hono);
        printf(" City Pincode:");
        scanf("%d",&myse.add.pin);
        printf("\n Name:%s",myse.name);
        printf("\n Father Name:%s",myse.faname);
        printf("\n Mother Name:%s",myse.moname);
        printf("\n My Age:%d",myse.age);
        printf("\n My Phone Number:%d",myse.phono);
        printf("\n City:%s",myse.add.city);
        printf("\n My Permanent Address:%s",myse.add.address);
        printf("\n House Number:%d",myse.add.hono);
        printf("\n City Pincode:%d",myse.add.pin);
    }
