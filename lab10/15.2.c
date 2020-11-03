#include <stdio.h>
main()
{
    incre();
    incre();
    incre();
}
    incre()
{
    char var = 65; /* var is automatic variable */
    printf("\nThe character stored in var is %c", var++);
}