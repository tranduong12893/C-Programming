#include<stdio.h>
void main()
{
    char name[5][30];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Hay nhap ten hoc sinh:");
        gets(name[i]);
    }
    printf ("Danh sach hoc sinh:");
    for(i=0;i<5;i++)
    {
        printf("\n%d.%s",i+1, name[i]);
    }
}
