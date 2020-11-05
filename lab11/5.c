#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
void menu(int *ch);
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
double div(int a,int b);
int main(){
    int key, ch;
    int a,b;
    bool Dn = false;
    while(true){
    menu(&ch);
    switch(ch){
        case 1:{
            printf("hay nhap sop thu nhat:");
    		scanf("%d", &a);
    		printf("hay nhap sop thu nhat:");
    		scanf("%d", &b);
    		printf("Nhap thanh cong");
    		Dn = true;
            getch();
            break;}
        case 2:
            if(Dn){
                printf("Ban chon tinh tong.");
                sum(a,b);
                getch();
                break;}
            else{
                printf("Xin hay nhap so truoc!");
                break;}
        case 3:
            if(Dn){
                printf("Ban chon tinh tong.");
                sub(a,b);
                getch();
                break;}
            else{
                printf("Xin hay nhap so truoc!");
                break;}
        case 4:
            if(Dn){
                printf("Ban chon tinh tong.");
                mul(a,b);
                getch();
                break;}
            else{
                printf("Xin hay nhap so truoc!");
                break;}
        case 5:
            if(Dn){
                printf("Ban chon tinh tong.");
                div(a,b);
                getch();
                break;}
            else{
                printf("Xin hay nhap so truoc!");
                break;}
        case 6:
            return 0;
        default:
        	printf("\nKhong co chuc nang nay!");
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
    } 
}
}
//menu
void menu(int *ch)
{
    printf("\n   TINH TOAN\n");
    printf("========================\n");
    printf("1. Nhap so\n");
    printf("2. Tinh tong\n");
    printf("3. Tinh hieu\n");
    printf("4. Tinh tich\n");
    printf("5. Tinh thuong\n");
    printf("6. Thoat\n");
    printf("========================\n");
    printf("Chon:");
    scanf("%d", &ch);
}
//tinh tong
int sum(int a, int b)
{
    int sum;
    sum=a+b;
    printf("Tong cua 2 so la:%d", sum);
}
//tinh hieu
int sub(int a, int b)
{
    int sub;
    sub=a-b;
    printf("Hieu cua 2 so la:%d", sub);
}
//tinh tich
int mul(int a, int b)
{
    int mul;
    mul=a*b;
    printf("Tich cua 2 so la:%d", mul);
}
//tinh thuong
double div(int a, int b)
{
    float div;
    if(b != 0)
    div=a/b;
    printf("Thuong cua 2 so la:%f", div);
}
