#include<stdio.h>
int main()
{
    int m,n,k=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(i%2==0&&i%3==0)
        {
            k++;
            
        }
}
printf("%d",k);
}