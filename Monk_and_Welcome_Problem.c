#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)                  
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0,j=0;i<n&&j<n;i++,j++)
    {
        printf("%d ",a[i]+b[i]);
    }
}

