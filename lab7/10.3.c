#include<stdio.h>
int main()
{
    int i, j,x,n, max;
    j=10;
    printf("Hay in nhap so bang cuu chuong ban muon in ra:");
    scanf("%d",&max);
    for(x=1;x<=max;x++)
	{
    for(i=0; i<j;i++)  
		printf("%d * %d = %d\n", i+1, x, (i+1)*x);	
	}
    
}
