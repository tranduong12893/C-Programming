#include <stdio.h>
#include <stdlib.h>
int main() 
{	int num[10];
	indexMin(num,10);
	return 0;
}
int indexMin(int num[],int size)
{	
	int min, i,vt;
	
	for(i=0;i<size;i++){
		printf("Hay nhap so thu %d:", i+1);
		scanf("%d", &num[i]);
		}
	min=num[0];
	for(i=0;i<size;i++){
		if(min>num[i])
		min=num[i];
		}
	for(i=1;i<=size;i++){
	if(num[i]==min)
		{vt=i;break;
		}
		}
	printf("Vi tri dau tien xuat hien so nho nhat la:%d",vt+1);
}		

