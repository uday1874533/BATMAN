#include<stdio.h>
int main()
{
    int n,s,sum=0,u;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        u=s%10;
        sum=sum+u;
        s=s/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}