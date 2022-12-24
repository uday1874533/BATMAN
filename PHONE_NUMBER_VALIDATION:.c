#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(1000000000>n&&n<=999999999)
    {
 printf("Invalid");
    }
    else
    {
        printf("Valid");
    }
}    