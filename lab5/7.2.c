#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a, b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	
	if(a*b>1000)
		printf("\ntich 2 so lon hon 1000.");
		else if(a*b==1000)
			printf("\ntich cua 2 so bang 1000.");	
}

