#include <stdio.h>
void main()
{
    char c;
    printf("Please enter a character : ");
    scanf("%",&c);
    if (c >= 'A' && c <= 'Z')
        printf("Lowercase character = %c", c + "a" - 'A');
    else
        printf("Character Entered is = %c",c);

}