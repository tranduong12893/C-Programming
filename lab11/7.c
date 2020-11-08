#include<stdio.h>
#include<string.h>
void check(int age, int h, char name[30]);
void say(char name[30]);
void love( char name[30]);
void Break();
int main()
{
    char name[30], lever[10], tc[50], nguoihinh[50];
    int h, kg, age; 
    printf("Thong tin cua co gai:\n");
    printf("Nhap ten co gai:");
    gets(name);
    printf("Nhap tuoi cua co gai:");
    fflush(stdin);
    scanf("&d", &age);
    printf("Nhap chieu cao cua co gai(cm):");
    fflush(stdin);
    scanf("&d", &h);
    printf("Nhap can nang cua co gai:");
    fflush(stdin);
    scanf("&d", &kg);
    printf("Nhap hoc van cua co gai:");
    fflush(stdin);
    gets(lever);
    printf("Nhap tinh cach cua co gai:");
    fflush(stdin);
    gets(tc);
    printf("Nhap nguoi hinh cua co gai:");
    fflush(stdin);
    gets(nguoihinh);
    check(age, h, name);
    return 0;
}
//tieu chuan
void check(int age, int h, char name[30])
{   if(age>=18&&age<=30)
    {
        if(h>150){
            say(name);}
        else{
            printf("Minh khong hop dung day ban nha!!!!");}
    }
    else
            printf("Minh khong hop dung day ban nha!!!!");  
}
//to tinh
void say(char name[30])
{   char tl;
    printf("%s Lam nguoi yeu to nha!\n(y or n)\n", name);
        scanf("%c", &tl);
        if(tl=='y')
            love(name);
        else
            Break();   
}
//yeu
void love(char name[30])
{
    int i, j, n;
    int len;
    n=10;
    len=strlen(name);
    for(i=n/n;i<=n;i+2)
    {
        for(j=1;j<n-1;j+=2)
        {printf(" ");}
        for(j=1;j<=i;j++)
        {printf("*");}
        for(j=1;j<n-1;j++)
        {printf(" ");}
        for(j=1;j<=i;j++)
        {printf("*");}
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {printf(" ");}
        if(i==n)
        {
            for(j=1;j<=(n*2-len)/2;j++)
        {printf("*");}
        printf("%s",name);
        for(j=1;j<(n*2-len)/2;j++)
        {printf("*");}
        }
        else
        {
            for(j=1;j<+(i*2)-i;j++)
            {printf("*");}
        }
        printf("\n");
    }
} 
//that tinh
void Break()
{
    printf("hu!!hu!!hu!!hu!!hu!!");
}
