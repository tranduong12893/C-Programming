#include<stdio.h>
void main()
{
    int i, j, k;
    
    printf("Nhap so hang ban muon tao:");
    scanf("%d", &i);
    printf("\n");
    for(j=0;j<i;j++)
    {
        printf("\n");
        for(k=0;k<=j;k++)
        {
            printf("%d", k+1);
        }
    }
}
