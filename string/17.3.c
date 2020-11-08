#include<stdio.h>
#include<string.h>
void main()
{
char firstname[15];
char lastname[15];
printf("Enter your first name:");
scanf("%s",firstname);
printf("Enter your last name:");
scanf("%s",lastname);
strcat(firstname, lastname);
/* Attaches the contents of lastname at the end of firstname */
printf("%s", firstname);
}