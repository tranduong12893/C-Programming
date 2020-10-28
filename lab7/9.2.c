#include<stdio.h>
int main()
{
    int num1, num2, num, sum;
    sum=0;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    for(num=num1;num<=num2;num++)
    {
    if(num%2!=0)
	sum+=num;
    }
	printf("\nTong cac so le trong day tren la:%d",sum);
}
