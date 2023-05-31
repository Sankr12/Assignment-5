//Write a program to calculate the simple interest
#include<stdio.h>
#include<conio.h>
int main()
{
    float f,p,r,t;
    printf("Enter the cost price: ");
    scanf("%f",&p);
    printf("Enter the selling price: ");
    scanf("%f",&r);
    f=(r-p)/p*100;
    printf("The final amount = %f",f);
}

