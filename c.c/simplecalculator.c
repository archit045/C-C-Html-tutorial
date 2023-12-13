#include<stdio.h>
void main()
{
   char op;
   float num1,num2,result=0.0f;
   printf("WELCOME TP SIMPLE CALCULATOR");
   printf("_ _ _ _ _ _ _ _ _ _ _ _ _ \n");
   printf("Enter Number[Number 1][+-*/][Number 2]\n");
   scanf("%f %c %f",&num1,op,num2);
   switch(op)
   {
    case '+':
    result=num1 + num2;
    break;
    case '-':
    result=num1 - num2;
    break;
    case '*':
    result=num1 * num2;
    break;
    case '/':
    result=num1 / num2;
    break;
    default:
    printf("Invalid Operator");
   }
   printf("%.2f %c %.2f=%.2f",num1,op,num2,result);
}