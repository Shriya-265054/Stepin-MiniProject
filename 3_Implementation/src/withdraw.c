#include"../inc/bank.h"
user withdraw(info *acc,float withdrawalAmount,info *temp,int *see)
{
    int i=search (acc,i,temp,see);
    if(i==-1)
    {
        return SUCCESS;
    }
    else
    {
        temp->amt-=withdrawalAmount;
        printf("Balance: %.2f\n",temp->amt);
    }
}