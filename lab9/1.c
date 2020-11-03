#include<stdio.h>
void main()
{
    int arr[10];
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("\nEnter the number %d:",i+1 );
        scanf("%d", &arr[i]);
    }
    for(i=1;i<10;i+=2)
    {
        printf("%d\t", arr[i]);
    }
    
}
