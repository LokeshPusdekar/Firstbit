// Write a C program to swap two numbers using a temporary third variable.

#include<stdio.h>
int main()
{
    int n1,n2,temp;
    printf("Enter No.1 = ");
    scanf("%d",&n1);
    printf("Enter No.2 = ");
    scanf("%d",&n2);
    temp= n2;
    n2= n1;
    n1= temp;
    printf(" Now No.1 is %d and No.2 is %d ",n1 ,n2);
    return 0;
}