#include"../inc/bank.h"

user deposit(float amt,info *acc,info *temp,int *see)
{
    //static float balance;
    int i=search(acc,i,temp,see);
    if (i == -1)
    {
        return SUCCESS;
    }
    else
    {
        acc->amt+=temp->amt;
        printf("Balance: %.2f\n",acc->amt);
       
    }
}