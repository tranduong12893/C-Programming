#include <stdio.h>
void main()
{
char name[20];
/* name is declared as a single dimensional character array */
puts("Enter your name:"); /* Displays a message */
gets(name); /* Accepts the input */
puts("Hi there:");
puts(name); /* Displays the input */
}