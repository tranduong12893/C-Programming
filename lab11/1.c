#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
   	printf("Nhap do dai canh thu 1 cua tam giac:");
   	scanf("%d", &a);
   	printf("Nhap do dai canh thu 2 cua tam giac:");
   	scanf("%d", &b);
   	printf("Nhap do dai canh thu 3 cua tam giac:");
   	scanf("%d", &c);
	GetArea(a, b, c);
}
void GetArea(int a, int b, int c)
{   
	float p, s;
	if((a+b)>c&&(a+c)>b&&(b+c)>a)
   	{
    p=(a+b+c)/2;
    s=(sqrt(p*(p-c)*(p-b)*(p-c)));
        printf("Dien tich tam giac la: %f", s);
    }
    else
        printf("Day khong phai la tam giac");
}
