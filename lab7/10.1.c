#include<stdio.h>
void main()
{
    int t,x;
    char name[30];
    printf("\nnhap ten cua ban:");
    gets(name);
	printf("Nhap tuoi cua ban:");
    scanf("%d", &t);
    
    for(x=0;x<t;x++)
        printf("\nChao %s lan thu %d.", name,  x+1); 
}
