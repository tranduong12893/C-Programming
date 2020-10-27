#include<stdio.h>
int main()
{
int a, b, c;
printf("Nhap ba so bat ky:");
printf("\nSo thu 1:");
scanf("%d", &a);
printf("\nSo thu 2:");
scanf("%d", &b);
printf("\nSo thu 3:");
scanf("%d", &c);
if(a>b&&a>c)
    printf("\nSo lon nhat la so:%d.", a);
else if (b>a&&b>c)
    printf("\nSo lon nhat la so:%d.", b);
else if (c>a&&c>b) 
    printf("\nSo lon nhat la so:%d.", c);
else 
    printf("\nGia tri cua ca so la khong dong nhat!");
}

    
