// Accept the price from user. Ask the user if he is a student (user may say y or n). If he
// is a student and he has purchased more than 500 than discount is 20% otherwise
// discount is 10%.But if he is not a student then if he has purchased more than 600
// discount is 15% otherwise there is not discount.

#include<stdio.h>

int main()
{
    int money_spend,discount;
    char yes_no;

    printf("Are you as student yes(y)/no(n) :");
    scanf("%c",&yes_no);

    printf("\nEnter the Amount you spend :");
    scanf("%d",&money_spend);

    if (yes_no == 'y')
    {
        printf("\nOk you are a Student");
        if (money_spend >= 500)
        {
            discount = (20*money_spend)/100;
            printf("\nYou got this much of discount %d rupees", discount);
        }
        else
        {
            discount = (10*money_spend)/100;
            printf("\nYou got this much of discount %d rupees", discount);
        }   
    }
    else
    {
        printf("\nOk you are not a Student");
        if (money_spend>=600)
        {
            discount = (15*money_spend)/100;
            printf("\nYou got this much of discount %d rupees", discount);
        }
        else
        {
            discount = (10*money_spend)/100;
            printf("\nYou got this much of discount %d rupees", discount);
        }
        
    }
    return 0;
}