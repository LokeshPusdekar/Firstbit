// Check the given number is prime or not.
// Input: n = 7
// Output: Prime

#include<stdio.h>

int main()
{   
    int num ,n=2, flag=0;
    printf("Enter any number:");
    scanf("%d",&num);

    //n = num;

    while (n <= num/2)
    {
        if ( num % n == 0 )
        {
            flag = 1;
            break;  
        }
        n++;
    }
    if (n <= 1)
        printf("Not Prime");
    else if (flag == 0)
        printf("Prime Number");
    else
        printf("Not Prime");
    return 0;
}