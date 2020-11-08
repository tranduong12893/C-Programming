#include<stdio.h>
#include<string.h>
void main()
{
char compname[20] = "Microsoft";
int len, ctr;
len = strlen(compname);
/* Determines the length of the string */
for(ctr = 0; ctr < len; ctr++)
/* Accesses and displays each character of the string */
printf("%c * ", compname[ctr]);
}