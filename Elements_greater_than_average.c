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
     int sum=0;
    for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
    int count=0;
    for(i=0; i<n; i++)
    {
        if(arr[i] >= sum/n)
        {
            count++;
        }
    }
    printf("%d",count);
}




