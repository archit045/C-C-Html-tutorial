#include<stdio.h>
#include<string.h>
struct product
{
    char pna[20],pty[10], pqua[10];
    int ppri;
}pro;
struct product1
{
    char pnam[20],ptyp[10], pqual[10];
    int ppric;
    struct product pro;
}pro1;
struct company
{
    char cna[10],cadd[10],cco[10],mff[10];
    int pin;
    struct product pro;
    struct product1 pro1;
}co;
void main()
{
    printf("Company NAme:");
    scanf("%s",&co.cna);
    printf("Company Address:");
    scanf("%s",&co.cadd);
    printf("Company Contact Number:");
    scanf("%s",&co.cco);
    printf("Company Manufactur Type:");
    scanf("%s",&co.mff);
    printf("Company Pin Code:");
    scanf("%s",&co.pin);
    printf("\nProduct Name:");
    scanf("%s",&co.pro1.pnam);
    printf("Product TYpe:");
    scanf("%s",&co.pro1.ptyp);
    printf("Product Quantity:");
    scanf("%s",&co.pro1.pqual);
    printf("Product Price:\n");
    scanf("%s",&co.pro1.ppric); 
    printf("**Details Of Second Product**\n");  
    printf("\nProduct Name:");
    scanf("%s",&co.pro1.pro.pna);   
    printf("Product Type:");
    scanf("%s",&co.pro1.pro.pty);
    printf("Product Quantity:");
    scanf("%s",&co.pro1.pro.pqua);  
    printf("Product Price:");
    scanf("%s",&co.pro1.pro.ppri);  
    printf("\nCompany Name:",co.cna);
    printf("\nCompany Address:",co.cadd);
    printf("\nCompany Contact Number:",co.cco);
    printf("\nCompany MAnufacture Type:",co.mff);
    printf("\nCompany Pin Code:",co.pin);
    printf("\nCompany Name:",co.cna);
    printf("\nProduct Name:",co.pro1.pnam);
    printf("\nProduct Type:",co.pro1.ptyp);
    printf("\nProduct Quantity:",co.pro1.pqual);
    printf("\nProduct Price:",co.pro1.ppric);
    printf("\nProduct Name:",co.pro1.pro.pna);
    printf("\nProduct Type:",co.pro1.pro.pty);
    printf("\nProduct Quantity:",co.pro1.pro.pqua);
    printf("\nProduct Price:",co.pro1.pro.ppri);
    
    }