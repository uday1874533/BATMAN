#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1||i==j||j==n)
            {
                printf("* ");
            }
            else
            printf("  ");
        }
        printf("
");
    }
}
// ,jf tso6t987tudrc ;y9y8