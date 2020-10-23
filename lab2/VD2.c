#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int num1; /* first number*/
	int num2; /* second number*/ 
	printf("Enter two intergers, and I will tell you\n");
	printf("the relationships they satisfy:");
	
	scanf("%d%d", &num1, &num2); /* read two integers*/
	
	if(num1 = num2){
	printf("%d is equal to %d\n", num1, num2);
	} /* end if*/
	
	if(num1 != num2){
	printf("%d is  not equal to %d\n", num1, num2);
	} /* end if*/
	
	if(num1<num2){
	printf("%d is less equal to %d\n", num1, num2);
	} /* end if*/
	return 0;
	
}
