#include <stdio.h>
int main ()
{
    int count = 0;
    while(count < 100)
    {
        printf("This goes on forever, HELP!!!\n");
    count+=10;
        printf("\t%d", count);
    count-=10;
        printf("\t%d", count);
        printf("\nCtrl-C will help");
    }
}