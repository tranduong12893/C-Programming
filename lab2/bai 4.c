#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
   float high, bottom, s; /* duong cao, day, dien tich */
			
	printf("Nhap duong cao tam giac:"); 
	scanf("%f", &high);
	
	printf("Nhap do dai day tam giac:"); 
	scanf("%f", &bottom);
	
	s= bottom / 2 * high; /* t�nh dien tich tam giac*/ 
	printf("Dien tich tam giac la:%f\n", s);
    return 0;

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
