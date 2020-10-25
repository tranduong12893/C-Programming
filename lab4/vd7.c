#include <stdio.h>
void main()
{
   int x,y;
   x=y=0;
   
   printf("Enter Choice (1 - 3) :");
   scanf("%d", &x);
   if(y==1)
   {
   		printf("\nThe value for y is: %d", y);
   		scanf("%d",&y);
   		if(y<=5)
   			printf("\nThevalue for y is:%d",y);
   		else
   			printf("\nThe value of y exceeds 5");
   	}
   	else
   		printf("\nChoice enterd was not 1");
}