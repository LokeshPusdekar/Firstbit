// Find factorial of given number.
// Input: n = 5
// Output: 120

#include<stdio.h>

int main()
{
    int num,i=1,fac=1;
    printf("Enter any number to find the Factorial of it: ");
    scanf("%d",&num);

    while (i <= num)
    {
        fac = fac * i;
        i++;
    }

    printf("The Fcatorial of the %d is %d",num,fac);
    
    return 0;
}