#include <stdio.h>

void main()
{
    int num,flag=1,neg_counter=0,pos_counter=0,zero_counter=0,c;
    while(flag)
    {
        printf("Enter a number : ");
        scanf("%d",&num);
        if(num>0)
        {
            pos_counter++;
        }
        if(num<0)
        {
            neg_counter++;
        }
        if(num==0)
        {
            zero_counter++;
        }
        printf("Do you want to Continue Enter 1 for yes and 0 for no)?\n");
        scanf(" %d", &c);
        if(c==0)
        {
            flag= 0;
        }
    }
    printf("Total number of positive is : %d\n",pos_counter);
    printf("Total number of negative is : %d\n",neg_counter);
    printf("Total number of zero is : %d\n",zero_counter);
}