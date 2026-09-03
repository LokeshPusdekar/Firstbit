// Sum of numbers in given range.
// Find sum of numbers from start to end.
// Input: start = 1, end = 5
// Output: 15

#include<stdio.h>

int main()
{
    int num = 1,sum=0;
    while (num <= 5)
    {
        sum = sum + num;
        num++;
    }
    printf("\n%d",sum);
    return 0;
}