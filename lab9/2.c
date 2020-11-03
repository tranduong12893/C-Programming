#include<stdio.h>
void main()
{
    int Arr[5];
    float arr[10];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Nhap so thu %d:", i+1);
        scanf("%d", &Arr[i]);
		arr[i]=Arr[i];
	    printf("so thu %d=%f\n",i+1, arr[i]);
    }
   	for(i=6; i<=10; i++)
    {	
        if(i>5) 
		printf("Nhap so thu %d:\n", i);      
        printf("so thu %d = 0\n",i);
         
    }
    
}
