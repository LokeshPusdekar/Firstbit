//Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value for A, B, C : ");
    scanf("%d%d%d",&a,&b,&c);

    if (a>b)
    {
        printf("A is greater ");
    }
    else
    {
        if (b>c)
        {
            printf("B is greater");
        }
        else
        {
            if (c>a)
            {
                printf("C is greater ");
            }
            else
            {
                printf("All are equal");
            }
        }
    }
    return 0;
}