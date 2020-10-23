#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float usd1, vnd1, soTienDoi; /* tien dolla, tien vnd va tien doi */
			
	printf("Ty gia 1USD = 16.169 VND.\n"); /*thong bao ty gia*/

	printf("Nhap so tien USD can doi ra VND: \n");/* nhap so luong dolla*/
    scanf("%f", &usd1);
    
	soTienDoi = usd1 * 16.169; /* tinh so tien quy doi*/
	printf("So tien doi duoc la: %f VND \n",soTienDoi);
	return 0;
}

