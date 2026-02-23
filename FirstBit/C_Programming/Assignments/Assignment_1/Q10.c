// Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.

#include<stdio.h>
int main()
{
    int eng,sci,math,comp,hindi;
    float total,percent;
    printf("Enter the Marks of 5 Subjects respectively : ");
    scanf("%d %d %d %d %d",&eng,&sci,&math,&comp,&hindi);
    total = eng + sci + math + comp + hindi;
    percent = total/5;

    printf("Total Marks is = %f",total);
    printf("\nPercentage is = %f",percent);

    return 0;
}