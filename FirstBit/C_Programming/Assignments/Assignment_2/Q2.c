// Write a program to check given 3 digit number is pallindrome or not.

#include<stdio.h>

int main()
{
    int num,n1,n3;
    printf("Enter a Number :");
    scanf("%d",&num);

    n1 = num % 10;
    n3 = num /100;

    if (n1 == n3)
    {
        printf("The Number is Pallindrome Number.");
    }
    else
    {
        printf("The Number is not a Pallindrome Number.");
    }
    
    return 0;
}