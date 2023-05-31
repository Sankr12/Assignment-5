//Write a program to calculate the volume of a Cuboid.
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the length of cuboid: ");
    scanf("%f",&a);
    printf("Enter the breadth of cuboid: ");
    scanf("%f",&b);
    printf("Enter the height of cuboid: ");
    scanf("%f",&c);
    d = a*b*c;
    printf("Volume of Cuboid = %f",d);
    getch();
}
