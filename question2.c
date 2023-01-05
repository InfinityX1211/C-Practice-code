//Write a program that calculates N!*K!/(N-K)! for given N and K (1<K<N).
#include<stdio.h>

void main()
{
    long int k=6,n=8,i,a=1,b=1,c=1;
    
    for(i=1;i<=k;i++)
    {
        a=a*i;
    }
    for(i=1;i<=n;i++)
    {
       	b=b*i;
    }
    for(i=1;i<=n-k;i++)
    {
        c=c*i;
    }
    n=((a*b)/c);
    printf("%ld",n);
}
