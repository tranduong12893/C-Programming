#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a, b, c, sum;
	printf("\nenter any three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	
	sum = a + b + c;
	printf("\n Sum = %d", sum);
}
