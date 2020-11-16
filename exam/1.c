#include<stdio.h>
int main()
{
    int i, a[10];
    printf("Enter 10 integers\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]:", i+1);
        scanf("%d", &a[i]);
    }
    printf("Display in the reversed order\n"); 
    for(i=9;i>=0;i--)
        printf("%d\n",a[i]);
    return 0;
}
