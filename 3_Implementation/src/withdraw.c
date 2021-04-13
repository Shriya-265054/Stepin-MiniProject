#include"bank.h"

user withdraw(info *acc,int cust_id, info *temp, float amt,int *see)
{
    int i=search (acc,cust_id,temp,see);
    if(i==-1)
    {
        return SUCCESS;
    }
    else if((acc+i)->balance < amt)
    {
        printf("Insufficient balance");
    }
    else
    {
        (acc+i)->balance -= amt;
    }
}