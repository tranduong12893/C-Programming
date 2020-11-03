#include<stdio.h>
void main()
{
    int arr[10];
    int i, sum=0, max, min, maxpc=0, minpc=0;
    for(i=0;i<10;i++)
    {
        printf("Nhap so thu %d:", i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<10; i++)
	{
		if (arr[i]>max)
		max=arr[i];
		if (arr[i]<min)
		min=arr[i];
	}
    for(i=1;i<10; i++)
    {
        if(arr[i]==max)
        {
            maxpc++;
        }
        if(arr[i]==min)
        {
            minpc++;
        }
    }
    printf("\nSo lon nhat la:%d xuat hien:%d lan", max, maxpc);
    printf("\nSo nho nhat la:%d xuat hien:%d lan", min, minpc);
    printf("\nTong cua day la:%d", sum);
    printf("\nTrung binh cong cua day la:%f, sum/10");
}
