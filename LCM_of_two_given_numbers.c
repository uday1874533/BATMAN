#include<stdio.h>



int main()
{
    int a,b,max;
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    for(int i=max;;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("%d",i);
            break;
        }
    }
}
