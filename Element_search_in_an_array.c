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
    int target;
    scanf("%d", &target);
    int found = 0;
    for(i=0; i<n; i++)
    {
        if(arr[i] == target)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
