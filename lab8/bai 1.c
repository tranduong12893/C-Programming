#include<stdio.h>
int main()
{
    int num1, num2, num;
    printf("Hay nhap so thu nhat:");
    scanf("%d", &num1);
    printf("Hay nhap so thu  hai:");
    scanf("%d", &num2);
    for(num>=num1; num<=num2; num+=50)
        {
		if("num%50==0")
        printf("%d\t", num);
    	}
}
