#include"bank.h"

user withdraw(info *acc,info *temp,int *see)
{
    int i=search (acc,i,temp,see);
    if(i==-1)
    {
        return SUCCESS;
    }
    else
    {
        printf("Balance: %.2f",(temp->amt - acc->amt));
    }
}