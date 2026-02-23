// Write a C program to convert given minutes into hours and remaining minutes.

#include<stdio.h>
int main()
{
    int min,hh,mm;
    printf("Enter the Minutes = ");
    scanf("%d",&min);
    mm = min % 60;
    hh = min / 60;
    printf(" THe Actual time is (hh:mm) = %dhrs & %dmins",hh,mm);

    return 0;

}