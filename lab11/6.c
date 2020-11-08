#include<stdio.h>
#include<math.h>
float dt(float a, float b);
float cv(float a, float b);
void main()
{float a,b;
float s, c;
int ch;
    printf("Nhap chieu dai hinh chu nhat:");
    scanf("%f", &a);
    printf("Nhap chieu rong hinh chu nhat:");
    scanf("%f", &b);
    printf("1. Tinh dien tich\n2. Tinh chu vi\n");
    printf("Moi ban chon:");
    scanf("%f", &ch);
    
    switch (ch)
    {
    case 1:
        s=dt(a,b);
        printf("dien tich la:%f",s);
        break;
    case 2:
        c=cv(a,b);
        printf("chu vi la:%f",c);
        break;
    }
}
//dien tich
float dt(float a, float b)
{
    float s;
    s=a*b;
    return s;
}
//chu vi
float cv(float a, float b)
{
    float c;
    c=(a+b)*2;
}
