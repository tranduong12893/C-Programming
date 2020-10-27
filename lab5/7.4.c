#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int l;
	char x;
	printf("Nhap luong cua nhan vien: ");
	scanf("%d",&l);
	printf("Nhap xep loai cua nhan vien(a,b,k): ");
	fflush(stdin);
	scanf("%c",&x);
	if('a'<x<='c')
	switch(x)
	{
		case 'a':
			printf("\nLuong cua nhan vien la:%d\n", l+300);
	 	    break;
		
		case 'b':
			printf("\nLuong cua nhan vien la:%d\n", l+250);
		 	break;
		
		case 'c':
			printf("\nLuong cua nhan vien la:%d\n", l+100);
		 	break;
		default : 
		   printf("\n Invalid entry");
	}
}


