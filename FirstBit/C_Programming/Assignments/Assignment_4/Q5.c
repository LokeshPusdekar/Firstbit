// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong

#include<stdio.h>

int main()
{
    int num,sum=0,temp,r;
    printf("Enter any number:");
    scanf("%d",&num);

    temp = num;

    while (num != 0)
    {
        r = num % 10; 
        sum = sum + (r*r*r);
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("This is an Armstrong number.");
    }
    else
    {
        printf("This is not an Armstrong number.");
    }
     
    return 0;
}