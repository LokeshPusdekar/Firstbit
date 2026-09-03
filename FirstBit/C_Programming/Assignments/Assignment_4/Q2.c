// Print table for given number.
// Input: n = 5
// Output: 5 10 15 20 25 30 35 40 45 50

#include<stdio.h>

int main()
{
    int num = 5;
    while (num <= 50)
    {
        if (num % 5 == 0)
        {
            printf("\n%d",num);
        }
        
        
        num++;
    }
    
    return 0;
}