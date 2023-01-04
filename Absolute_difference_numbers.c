#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a,b,nl,n2,r,q,d,ad;
    scanf("%d%d",&n,&m);
    nl=log10(n)+1;
    n2=nl-m;
    a=pow(10,m);
    b=pow(10,n2);
    r=n%a;
    q=n/b;
    d=r-q;
    ad=abs(d);
    printf("%d",ad);
    
}