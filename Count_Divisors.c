#include<stdio.h>
int main()
{
    int I,u,n,c=0,i;
    scanf("%d%d%d",&I,&u,&n);
    for(i=I;i<=u;i++)
    {
        if(i%n==0)
        {
            c++;
        }
    }
    printf("%d",c);
}