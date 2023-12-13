#include<stdio.h>
void main()
{
  int n,rev=0,num;
  printf("enter any number");
  scanf("%d",&n);
  num=n;
  while (n!=0)
  {
    rev=(rev*10)+(n%10);
    n=n/10;
    {
        if(num==rev)
        printf("\n number %d is palindrome",num);
        else("\n number %d is not palindrome",num);
    }
  }
}