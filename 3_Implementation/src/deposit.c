#include"../inc/bank.h"
/**
 * @brief Deposit is used to deposit amount in the account.
 * 
 * @param amt 
 * @param acc 
 * @param temp 
 * @param see 
 * @return user 
 */
user deposit(float amt,info *acc,info *temp,int *see)
{
    int i=search(acc,i,temp,see);
    if (i == -1)
    {
        return SUCCESS;
    }
    else
    {
        /**
         * @brief Adds amount to be deposit with existing balance.
         * 
         */
        acc->amt+=temp->amt;
        //printf("Balance: %.2f\n",acc->amt);
       
    }
}