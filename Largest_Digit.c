#include<stdio.h>
int main()
{
    int n,max=0,x;
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        if(max<x)
        {
            max=x;
        }
        n=n/10;
    }
    printf("%d",max);
    }