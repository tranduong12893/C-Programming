#include <stdio.h>
void main()
{
   int basic;
   printf("\n Please enter your basic:");
   scanf("%d",&basic);
   switch(basic)
   {
   		case 200: 
		   printf("\n Bonus is dolla %d\n", 50);
   			break;
   			
   		case 300: 
		   printf("\n Bonus is dolla %d\n", 125);
   			break;
   			
   		case 400: 
		   printf("\n Bonus is dolla %d\n", 140);
   			break;
   			
   		case 500: 
		   printf("\n Bonus is dolla %d\n", 175);
   			break;
   			
   		default : 
		   printf("\n Invalid entry");
   }
}