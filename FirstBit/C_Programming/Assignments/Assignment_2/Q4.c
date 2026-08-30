// Write a program to check whether a given character is a vowel or consonant.

#include<stdio.h>

int main()
{
    char character;
    printf("Enter a Character :");
    scanf("%c",&character);

    if (character == 'a' || character =='e' || character =='i' || character =='o' || character =='u' || character =='A' || character =='E' || character =='I' || character =='O'|| character =='U')
    {
        printf("This a Vowel");
    }
    else
    {
        printf("This is Consonant");
    }
    return 0;
}