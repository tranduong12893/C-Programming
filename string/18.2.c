void uppername(char name_arr[])
{
int x;
for(x=0;name_arr[x] != ‘\0’; x++)
{
if(name_arr[x]>=97 && name_arr[x]<=122)
name_arr[x]=name_arr[x]-32;
}
}