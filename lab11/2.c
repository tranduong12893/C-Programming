#include<stdio.h>
int main()
{
    int i, j;
    printf("Nhap so luong phan tu cua mang:");
    scanf("%d", &j);
    int num[j];
    for(i=0;i<j; i++)
        {
            printf("Nhap Phan tu thu %d cua mang:", i+1);
        	scanf("%d", &num[i]);
        }
	Check(num, j);
    return 0;
}

int Check(int num[], int j)
{	int i;
	printf("Cac so chia het cho 50 trong mang la:\n");
	for(i=0;i<j; i++)
    	if(num[i]%50==0)
    		{printf("%d\t", num[i]);}	        
}
