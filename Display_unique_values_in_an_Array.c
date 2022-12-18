#include<stdio.h>
int main()
{
    int n,a[100],b,f,c=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        f=0;
        b=a[i];
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(b==a[j])
                {
                    f=1;
                    c++;
                    break;
                }
            }
        }
        if(f==0)
           printf("%d ",b);
    }
    if(c==n)
      printf("-1");
}