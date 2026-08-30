// Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
// 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
// respectively.

#include<stdio.h>

int main()
{
    int salary, da,ta,hra;
    printf("Enter the Salary :");
    scanf("%d",&salary);

    if (salary <=5000)
    {
        printf("your salary is less or equal as 5000.\n");
        da = (10*salary)/100;
        ta = (20*salary)/100;
        hra = (25*salary)/100;
        printf("da=%d \n ta=%d \n hra=%d",da,ta,hra);
    }
    else
    {
        printf("your salary is greater than 5000.\n");
        da = (15*salary)/100;
        ta = (25*salary)/100;
        hra = (30*salary)/100;
        printf("da=%d \n ta=%d \n hra=%d",da,ta,hra);
    }
    
    return 0;
}
