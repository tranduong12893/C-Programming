#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
   float v, s, r; /* chu vi, dien tich, ban kinh */
	
	printf("Nhap ban kinh duong tron:"); 
	scanf("%f", &r);
			
	v = 2 * r * 3.14; /* tính chu vi duong tron*/ 
	printf("chu vi duong tron la:%f\n", v);
		
	s = pow(r,2) * 3.14; /* tính dien tich duong tron*/ 
	printf("The tich hinh tru la:%f\n", s);
	return 0;

}
	
