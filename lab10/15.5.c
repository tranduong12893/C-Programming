#include <stdio.h>
main()
{
    int a, b, c;
    a = b = c = 0;
    printf("\nEnter 1st integer : ");
    scanf("%d", &a);
    printf("\nEnter 2nd integer : ");
    scanf("%d", & b);
    c = adder(a, b);
    printf("\n\na & b in main() are : %d, % d", a, b);
    printf("\n\nc in main() is : %d", c);
/* c gives the addition of a and b */
}
adder(int a, int b)
{
    int c;
    c = a + b;
    a *= a;
    b += 5;
    printf("\n\na & b within adder function are: %d, %d ", a, b);
    printf("\nc within adder function is : %d", c);
    return(c);
}