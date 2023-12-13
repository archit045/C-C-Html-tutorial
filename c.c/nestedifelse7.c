#include<stdio.h>
void main()
{
float sala,tax;
    printf("Enter Salary:");
    scanf("%f",&sala);
    if((sala<=150000)||(sala=100000))
    {
        tax=sala*0.3;
        sala=sala-tax;
    }else if((sala<=99000)&&(sala>=50000))
      {
        tax=sala*0.2;
        sala=sala-tax;
      }else
  {
    tax=sala*0.1;
    sala=sala-tax;
  }
    printf("\n Tax On Salary %f",tax);
    printf("\n salary after tax deduction %f",sala);
  
}
