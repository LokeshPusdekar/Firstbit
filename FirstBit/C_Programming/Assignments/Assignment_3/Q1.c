// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
// desired operations.

#include<stdio.h>

int main()
{
    int num1,num2;
    char sym;

    printf("Enter the two Numbers :");
    scanf("%d%d",&num1,&num2);

    printf("Enter the operation you want to perform (Use : +, -, *, /, %) : ");
    scanf(" %c",&sym);
    
    if (sym == '+')
    {
        printf("Addition is %d", num1 + num2);
    }
    else if (sym == '-')
    {
        printf("Addition is %d", num1 - num2);
    }
    else if (sym == '*')
    {
        printf("Addition is %d", num1 * num2);
    }
    else if (sym == '/')
    {
        printf("Addition is %d",  num1 / num2);
    }
    else if (sym == '%')
    {
        printf("Addition is %d", num1 % num2);
    }

    return 0;
}