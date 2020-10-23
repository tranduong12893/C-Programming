#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
   float v, high, radius; /* chu vi, chieu cao, ban kinh day*/
	
	printf("Nhap chieu cao hinh tru:"); 
	scanf("%f", &high);
			
	printf("Nhap ban kinh day hinh tru:"); 
	scanf("%f", &radius);
		
	v = pow(radius,2) * high * 3.14; /* tính the tich hinh tru*/ 
	printf("The tich hinh tru la:%f\n", v);
	return 0;

}
