// Write a program to check whether a given year is a leap year.

#include<stdio.h>

int main()
{
    int year;
    printf("Enter any Year:");
    scanf("%d",&year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("This is leap year");
    }
    else
    {
        printf("This is not a leap year");
    }
    return 0;
}