#include<stdio.h>
void main()
{
    union student
    {
        int rollno;
        float marks;
        char name[20];
    }s;
        printf("\n SIze Of Union=%d",sizeof(s));
}