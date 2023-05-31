//Write a program to calculate the average of three numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    d=(a+b+c)/3;
    printf("The average of the three number: %d",d);
}
