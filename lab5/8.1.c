#include<stdio.h>
int main()
{
    int x, y;
printf("Nhap x:");
scanf("%d", &x);
printf("\nNhap y:");
scanf("%d", &y);
if(x<2000||x>3000)
    printf("X la:%d", &x);
		
if(100<y||y<500)
    printf("\nY la: %d", &y);
}
