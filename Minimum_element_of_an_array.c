#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int i;
	for(i=0; i<n; i++) 
	{
		scanf("%d", &arr[i]); 
	}
	int small=arr[0];
	for(i=0; i<n; i++)
	{
		if(arr[i]<small)
		{
			small = arr[i];
		}
	}
	printf("%d ", small);
}
