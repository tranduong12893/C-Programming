#include<stdio.h>  
#include<conio.h>  

int main()  
{  
 	int n1=1,n2=1,n3,i,sopt;  
 	printf("Ban hay nhap so phan tu trong day Fibonacci ban muon in ra: ");  
 	scanf("%d",&sopt);  
 	printf("\n%d %d",n1,n2);  
   	for(i=2;i<sopt;++i)   
 	{	  
  		n3=n1+n2;  
  		printf(" %d",n3);  
  		n1=n2;  
  		n2=n3;  
 	}
}  
