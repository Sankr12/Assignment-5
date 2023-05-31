//Write a program to calculate the area of a rectangle
#include<stdio.h>
#include<conio.h>
int main()
{
   int c,a,b;
   printf("Enter the length of rectangle: ");
   scanf("%d",&a);
   printf("Enter the breadth of rectangle: ");
   scanf("%d",&b);
   c=a*b;
   printf("The Area of rectangle: %d",c);
   getch();
}
