// Check the given number is Strong number or not.
// Input: n = 145
// Output: Strong

#include<stdio.h>

int main()
{
    int num, temp, rem,sum = 0,fact=1,i=1;
    printf("Enter any to to know whether it is a strong no. or not: ");
    scanf("%d",&num);

    temp = num;

    while (temp > 0) {
        rem = temp % 10;

        while (i <= rem) {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}