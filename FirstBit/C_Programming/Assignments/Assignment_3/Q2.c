// Accept three sides of a triangle from the user and determine whether the triangle is
// equilateral, isosceles, or scalene.

#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter value for Side_A, Side_B, Side_C : ");
    scanf("%d%d%d",&s1,&s2,&s3);

    if (s1 == s2 && s1 == s3 )
    {
        printf("Equilateral Triangle ");
    }
    else
    {
        if (s2 == s3 || s1 == s2 || s3 == s2)
        {
            printf("The Triangle is Isoscale Triangle");
        }
        else
        {
            printf("The Triangle is Scalen Triangle ");
    
        }    
    }
    return 0;
}