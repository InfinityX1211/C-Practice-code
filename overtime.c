#include <stdio.h>

int main(void)
{
    int hours,overtime_pay=0;
    printf("Enter the total amount of hours worked ");
    scanf("%d", &hours);
    while (hours>40)
    {
        overtime_pay=overtime_pay+12;
        --hours;
    }
    printf("Your overtime pay is : %d \n",overtime_pay);
    return 0;
    while (/* condition */)
    {
        /* code */
    }
    
}