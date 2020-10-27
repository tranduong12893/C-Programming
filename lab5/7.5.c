#include<stdio.h>
int main()
{
	int tb;
	printf("Nhap so diem trung binh cua hoc sinh:");
	scanf("%d", tb);
		if(tb >= 75)
		printf("\nHoc sinh dat loai A.");
    		else if(60 <= tb || tb < 75)
			printf("\nHoc sinh dat loai B.");			
				else if(45 <= tb || tb < 60)
    			printf("\nHoc sinh dat loai C.");
     	        	else if(35 <= tb || tb < 45)
     	           	printf("\nHoc sinh dat loai D.");
	else
    	printf("\nHoc sinh dat loai D.");
}

	

