#include <stdio.h>
int main ()
{
    int count1, count2;
    for(count1 = 1, count2 = 0; count1 <=100; count1++)
    {
        printf("Enter %d Count2 : ", count1);
        scanf("%d", &count2);
        if(count2 == 100) break;
    }
}