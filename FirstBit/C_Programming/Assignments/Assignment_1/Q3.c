// Write a C program to convert temperature from Celsius to Fahrenheit using the
// formula:
// F = (C *9/5) + 32

#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter the Temprature in Celcius =");
    scanf("%f",&C);
    F=(C*9/5) + 32;
    printf("Now Temprature in Fahernheit = %f",F);
    
    return 0;
}