#include <stdio.h>
void main()
{
    int ary[10];
    int i, total, high;
    for(i=0; i<10; i++)
    {
        printf("\n Enter value: %d : ", i+1);
        scanf("%d",&ary[i]);
        }
        /* Displays highest of the entered values */
            high = ary[0];
            for(i=1; i<10; i++)
        {
        if(ary[i] > high)
        high = ary[i];
    }
        printf("\nHighest value entered was %d", high);
    /* prints average of values entered for ary[10] */
    for(i=0,total=0; i<10; i++)
    total = total + ary[i];
        printf("\nThe average of the elements of ary is %d",total/i);
}