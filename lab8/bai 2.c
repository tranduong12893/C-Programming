#include<stdio.h>
void main()
{
    char crushname[50], ans='y';
    int n,z;
    printf("What's is your name?\n");
    gets(crushname);
    for(n>0;n<=100; n++)
    {
        printf("Fall in love:%d \n", n);
    }
    do
    {	
		printf("Do you love me?");
        fflush(stdin);
        scanf("%c", &ans);
        Printf("%c", ans);
    }
        while(ans != 'y'||ans !='Y');
        	printf("I LOVE YOU!");
        	int a, b, size = 15;
			for (a = size/2; a <= size; a = a+2)
			{
			for (b = 1; b < size-a; b = b+2)
				printf(" ");

			for (b = 1; b <= a; b++)
				printf("*");

			for (b = 1; b <= size-a; b++)
				printf(" ");

			for (b = 1; b <= a-1; b++)
				printf("*");

				printf("\n");
			}

			for (a = size; a >= 0; a--)
			{
			for (b = a; b < size; b++)
				printf(" ");

			for (b = 1; b <= ((a * 2) - 1); b++)
				printf("*");

				printf("\n");
			}
	          
}
