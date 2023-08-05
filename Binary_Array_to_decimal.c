#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=n-1;i>=0;i--)
    {
        scanf("%d",&x[i]);
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+(x[i]*pow(2,i));
    }
    printf("%d",s);
}