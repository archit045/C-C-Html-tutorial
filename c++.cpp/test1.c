#include<stdio.h>
void main()
{
    int a=10,b=20;
    void add10(int,int);
    printf("\n INSIDE MAIN()");
    printf("\n Before Function Call A=%d\tB=%d",a,b);
    add10(a,b);
    printf("\n Back To Main()");
    printf("\n After Function Call A=%d\tB=%d",a,b);
}
void add10(int x,int y)
{
    printf("\n Inside add10()");
    x=x+10;
    y=y+10;
    ("\n Inside add10() function call a=%d\tb=%d",x,y);
}