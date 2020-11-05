#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num[5];
	Reverse(num,5);
}
//in ra mang nguoc
int Reverse(int num[],int size) 
{	int i;
for(i=1;i<=size;i++)
{
	printf("Hay nhap so thu %d:", i);
	scanf("%d", &num[i]);
}
	
for(i=size;i>0;i--)
	printf("%d\t", num[i]);
}
