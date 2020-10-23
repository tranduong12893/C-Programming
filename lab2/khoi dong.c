#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( void) \
{
	int integer1; /* fisrst number tobe input by user*/
	int integer2; /* second number tobe input by user*/
	int s, t, n; /* variable in which sum will be stored*/
	float c;
	
	printf( "enter first integer\n"); /* Promt */
	scanf("%d", &integer1); /* read an integer*/
	
	printf("enter second integer\n"); /*promt */
	scanf("%d", &integer2); /* read on integer */
	
	s = integer1 + integer2;
	printf("%d + %d = %d\n", integer1, integer2, s);
	t = integer1 - integer2;
	printf("%d - %d = %d\n", integer1, integer2, t);
	n = integer1 * integer2;
	printf("%d * %d = %d\n", integer1, integer2, n);
	c =(float)integer1/integer2;
	printf("%d / %d = %f\n", integer1, integer2, c);
}
