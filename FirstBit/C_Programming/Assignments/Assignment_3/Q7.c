// Accept the age and check if the person is:
// Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

#include<stdio.h>

int main()
{
    int age;

    printf("Enter the Age :");
    scanf("%d",&age);

    if (age<12)
    {
        printf("Its a Child.");
    }
    else if (age>12 && age<19)
    {
        printf("Its a Teenager.");
    }
    else if (age>19 && age<59)
    {
        printf("Its an Adult.");
    }
    else if (age>60)
    {
        printf("Its a Senior.");
    }
}