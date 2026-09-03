// Find Sum of first and last digit of given number.
// Input: n = 125
// Output: 6 (1 + 5)

#include<stdio.h>

int main()
{
    int num,r1,r2,temp,sum;
    printf("Enter any number here : ");
    scanf("%d",&num);
    temp = num;
    r1 = num % 10; // last digit save in r1=5

    while (temp > 10)
    {
        temp = temp / 10;
        
    }
    sum = temp + r1;
    printf("The addition of first and Last digit of the number is %d",sum);
    
    return 0;
}