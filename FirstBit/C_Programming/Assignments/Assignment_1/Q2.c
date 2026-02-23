// Write a C program to find the area of a circle.

#include<stdio.h>
int main()
{
    int r;
    float area,pi=3.14;
    printf("Enter the Radius of Circle = ");
    scanf("%d",&r);
    area = pi * r * r;
    printf("The Area of Circle is = %f",area);
    return 0;
}