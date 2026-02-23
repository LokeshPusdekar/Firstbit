// Write a C program to input the length and width of a rectangle and find its perimeter.

#include<stdio.h>
int main()
{
    int length,width,perimeter;
    printf("Enter the Lenght of the Rectangle = ");
    scanf("%d",&length);
    printf("Enter the Width of the Rectangle = ");
    scanf("%d",&width);

    perimeter = 2*(length + width);

    printf("The Perimeter of the Rectangle is = %d",perimeter);

    return 0;
}