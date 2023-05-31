//Write a program to calculate the area of a circle.
#include<stdio.h>
#include<conio.h>
int main()
{
    float r,A;
    printf("Enter the Radius of Circle: ");
    scanf("%f",&r);
    A = 3.14*r*r;
    printf("Area of the circle = %f",A);
}
