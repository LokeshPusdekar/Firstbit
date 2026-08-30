// Write a program to check whether a given character is uppercase or lowercase.

#include<stdio.h>

int main()
{
    char character;
    character = 'b';
    //printf("Enter a Character : ");
    //scanf("%c",&character);

    if (character >= 'a' && character <= 'z')
    {
        printf("This character is in Lowecase");
    }
    else 
    {
        printf("This character is in Uppercase");
    }
    return 0;
    
}