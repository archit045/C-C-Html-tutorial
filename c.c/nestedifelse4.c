#include<stdio.h>
void main()
{
    float p;
    printf("Enter Principal:");
    scanf("%f",&p);
    if((p>90)||(p>=90)&&(p<100))
    {
        printf("\n Grade A");
    }else if((p>80)||(p>89)&&(p>=79))
    
      { 
      printf("\n Grade B");
      }
    else if(p>70)
    {
        printf("\n Grade C");
    }
    else if(p>60)
    {
        printf("\n Grade D");
    }
    else if(p>50)
     {
        printf("\n Grade E");
     }
    else if(p>40)
    {
        printf("\n Grade F");
    }
    else
    {
        printf("\n fail");
    }
}