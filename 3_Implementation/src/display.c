#include"bank.h"

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
            printf("Balance: %d.2f\n",p->balance); 
            printf("***********\n");
            p=p->nt;
        }
        return SUCCESS;
    }
}