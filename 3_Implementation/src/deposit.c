#include"bank.h"

user deposit(info *acc,float amt,int cust_id, info *temp,int *see)
{
    int i=search(acc,cust_id,temp,see);
    if(i == -1)
    {
        return SUCCESS;
    }
    else
    {
        (acc+i)->balance += amt;
    }
}