#include <stdio.h>
int main() 
{	
    int a[100];
    int n, i, vt=0;
	printf("Enter the number of elements in the array:");
    scanf("%d", &n);
	for(i=0;i<n;i++)
    {
		printf("Enter the number of %d:", i+1);
		scanf("%d", &a[i]);
	}
	vt = smallest_index(a,n);
    printf("the index of the smallest element in an array is :%d",vt+1);
	return 0;
}
//smallest_index
int smallest_index(int a[], int n)
{
    int min, i,vt;
    min=a[0];   
	for(i=0;i<n;i++)
    {
		if(min>a[i])
		min=a[i];
	}
	for(i=1;i<=n;i++)
    {
	    if(a[i]==min)
		vt=i;
		break;
        return vt;
	}
	
}		
