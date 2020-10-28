#include <stdio.h>
void main()
{
    char ary[5];
    int i;
    printf("\n Enter string :" );
    scanf("%s",ary);
    printf("\n The string is %s \n\n", ary);
    for (i=0; i<5; i++)
        printf("\t%d", ary[i]);
}