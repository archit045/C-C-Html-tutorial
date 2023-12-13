#include<stdio.h>
void main()
{
    float amt,disc;
    printf("Enter total bill amount ");
    scanf("%f",&amt);
    if(amt>999)
    {
        disc=amt*.2;
        amt=amt-disc;
    }else
    {
       disc=amt*.1;
       amt=amt-disc;
    }
      printf("Total discount=%f\n",disc);
      printf("Bill Amount=%f",amt);
}