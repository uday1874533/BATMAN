#include<stdio.h>
int main()
{
    int n,x,c;
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        int i;
        for(i=1;i<=n-2;i++)
        {
            printf("%d",i);
            
        }
        c=i-1;
        for(int k=1;k<c;k++)
        {
            printf("%d",k);
        }
        printf("
");
    }
}