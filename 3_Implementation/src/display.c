#include"../inc/bank.h"
/**
 * @brief Displays necessary information regarding the bank account by checking correct account number.
 * 
 * @param acc 
 * @return user 
 */
user display(info *acc)
{
    info *p;
    p=acc;

    if(acc==NULL)
    {
        return NO_ACC_EXIST;
    }
    else
    {
        while(p!=NULL)
        {
            printf("Account No: %d\n",p->acc_no);
            printf("Name: %s\n",p->name);
            printf("Balance: %.2f\n",p->amt); 
            printf("***********\n");
            p=p->nt;
        }
        return SUCCESS;
    }
}