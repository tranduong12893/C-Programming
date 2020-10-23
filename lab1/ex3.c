#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	int principal, period;
	float rate, si;
	
	principal = 1000;
	period = 3;
	rate = 8.5;
	
	si = principal * period * rate / 100;
	
	printf("%f", si); 
}
