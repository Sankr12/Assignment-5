/*Write a program to calculate the area of a triangle where base and height of the
triangle are given.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the base of triangle: ");
    scanf("%f",&a);
    printf("Enter the height of triangle: ");
    scanf("%f",&c);
    d = 0.5*a*c;
    printf("Area of Triangle = %f",d);
    getch();
}
