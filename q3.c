//    Write a program to find sum of the following series for n terms: 
//           1 + 2/2! + 3/3! + 4/4! + ...   where n=4.
#include <stdio.h>

void main()
{
	int n=4;
	float value=1,sum=0;
	for(int i=1;i<=n;i++)
	{
		value=value*i;
		sum=sum+(float)(i/value);
		value=1;
	}
	printf("%f",sum);
}          
