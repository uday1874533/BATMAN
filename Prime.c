#include<stdio.h>
#include<math.h>
int main()
{
    int n,k=0;
    scanf("%d",&n);
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            k++;
        }
    }
    if(k==1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    
}