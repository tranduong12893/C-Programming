#include<stdio.h>
main()
{
    incre();
    incre();
    incre();
}
    incre()
{
    static char var = 65; /* var is static variable */
    printf("\nThe character stored in var is %c", var++);
}