//Write a program to calculate the simple interest
#include<stdio.h>
#include<conio.h>
int main()
{
    float f,p,r,t;
    printf("Enter the initial amount: ");
    scanf("%f",&p);
    printf("Enter the rate of interest annually: ");
    scanf("%f",&r);
    printf("Enter the time annually: ");
    scanf("%f",&t);
    f=(p*r*t)/100;
    printf("The final amount = %f",f);
}
