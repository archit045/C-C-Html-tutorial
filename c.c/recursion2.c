#include<stdio.h>
void print(int n);
int main()
{
    print(5);
    return 0;
}
   void print(int n)
   {
      printf("\n %d",n);
      if (n<=1)
      {
        return;
      }
       print(n-1);
   }