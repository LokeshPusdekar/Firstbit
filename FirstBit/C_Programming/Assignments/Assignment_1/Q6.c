// Write a C program to find the square and cube of a given number.


#include<stdio.h>
int main()
{
    int a,area,cube;
    printf("Enter the Edge of the Square =");
    scanf("%d",&a);
    area = a*a;
    cube = a*a*a;
    printf("The Area of the Square is = %d, and the Cube is = %d",area,cube);
    return 0;

}