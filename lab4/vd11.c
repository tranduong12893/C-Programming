#include <stdio.h>
int main()
{
	float com=0, sales_amt;
	printf("Enter the Sales Amiunt:");
	scanf("%f",&sales_amt);
	if(sales_amt >= 100)
		com=sales_amt * 0.1;
	printf("\n Commission = %f", com);
	return 0;
}