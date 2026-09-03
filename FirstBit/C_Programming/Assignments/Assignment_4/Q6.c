// Check the given number is Perfect number or not.
// Input: n = 28
// Output: Perfect

#include<stdio.h>

int main()
{
    int num,i=1, sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);

    while (i < num)
    {
        if (num % i == 0)
        {
            sum = sum + i;    
        }
    i++;  
    } 
    if (sum == num)
    {
        printf("%d this number is a perfect number.",num); 
    }
    else
    {
        printf("%d this number is not a perfect number.",num);   
    }
    
    return 0;
}