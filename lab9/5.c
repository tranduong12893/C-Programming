#include<stdio.h>
void main()
{
    char name[30][30];
    int i, row, col, avg, sum[30],point[30][4];
    for(i=0;i<30;i++)
    {	
        printf("Hay nhap ten hoc sinh thu %d:", i+1);
        fflush(stdin);
        gets(name[i]);
        
		for(col=0,row==i;col<4;col++)
			{
           	printf("Hay Nhap diem mon thu %d: ", col+1);
           	fflush(stdin);
           	scanf("%d", &point[row][col]);
			sum[0]==0;
			sum[i]+=point[row][col];
			}
		
    }
    	printf("Danh sach diem trung binh cua hoc sinh la:\n");    
    	for(i=0;i<30;i++)
    	{
			avg=sum[i]/4;
    		printf("%d.%s:%d\n",i+1,name[i],avg );
		}
}
