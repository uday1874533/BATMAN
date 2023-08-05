#include<stdio.h>
int main()
{
    int n,t=0,ev=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]%2==0)
        {
            ev++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]%2==0 &&i%2==0)
        {
            t++;
        }
    }
    if(t==ev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}