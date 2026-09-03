// Check the given number is Palindrome number or not.
// Input: n = 121
// Output: Palindrome

#include<stdio.h>

int main()
{
    int n,rem,temp,reverse=1;
    printf("Enter any to to know whether it is a Palindrome number or not: ");
    scanf("%d",&n);


    temp = n;

    while (temp > 0) {
        rem = temp % 10;    
        reverse = reverse * 10 + rem; 
        temp = temp / 10;           
    }
    printf("%d",reverse);

    if (reverse == n)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");


    return 0;
}