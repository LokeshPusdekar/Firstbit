// Write a C program to input five numbers and find their average.

#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float avg;
    printf("Enter Five numbers respectively :");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    avg = (a+b+c+d+e)/5;
    printf("The Average of the given Numbers is = %f", avg);
    return 0;
}