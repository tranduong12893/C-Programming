#include <stdio.h>
#include <string.h>
int main()
{
int i;
char names[5][20];
void uppername(char name_arr[]);
for(i=0;i<5;i++)
{
printf("Enter string %d: ", i+1);
scanf("%s", names[i]);
}
for(i=0;i<5;i++)
{
uppername(names[i]);
printf("\nNew string %d: %s", i+1, names[i]);
}
return 0;
}
void uppername(char name_arr[])
{
int x;
for(x=0;name_arr[x] != '\0'; x++)
{
if(name_arr[x]>=97 && name_arr[x]<=122)
name_arr[x]=name_arr[x]-32;
}
}