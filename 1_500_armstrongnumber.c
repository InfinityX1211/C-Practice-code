#include<stdio.h>
#include<math.h>

void main()
{
    int num=1,ones,tens,hundreds;
    for(num;num<=500;num++)
    {   
        ones=num%10;
        tens=(num/10)%10;
        hundreds=(num/100)%10;
        while((ones*ones*ones+tens*tens*tens+hundreds*hundreds*hundreds)==num)
        {
            printf("\n%d",num);
            break;
        }
    }
}