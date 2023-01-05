//Write a program that calculates N!/K! for given N and K (1<K<N).
#include <stdio.h>

void main()
{
    int k=6,n=8,fact=1;
    //for k!
    for(int i=k+1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
