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
	
	if(a-b==b||b-a==a)
		printf("\nHieu bang gia tri cua so da nhap vao.");
		else 
		printf("\nHieu khong bang bat ky gia tri nao da nhap.");	
}

