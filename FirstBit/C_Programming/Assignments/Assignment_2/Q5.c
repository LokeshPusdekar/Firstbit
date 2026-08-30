// Write a program to check whether a person is eligible to vote (age ≥ 18).

#include<stdio.h>

int main()
{
    int age;
    printf("Enter the Age :");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("This person is Eligible for Voting");
    }
    else
    {
        printf("This person is Not eligible for Voting");
    }
    return 0;
}