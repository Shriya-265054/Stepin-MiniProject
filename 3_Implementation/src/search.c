#include"../inc/bank.h"

user search(info *acc, int cust_id, info *temp, int *see)
{
    info *p;
    p=acc;
    if(acc==NULL)
    {
        return NO_ACC_EXIST;
    }
    else
    {
        // printf("\n%d\n",cust_id);
        int flag=0;
        while(p!=NULL)
        {
            if(p->acc_no == cust_id)
            {
                flag=1;
                break;
            }
            p=p->nt;
        }
        // printf("\n flag=%d\n",flag);
        if(flag==1)
        {
            *see=1;
            temp-> acc_no = p->acc_no;
            strcpy(temp->name, p->name);
            strcpy(temp->address, p->address);
            strcpy(temp->citizenship, p->citizenship);
            strcpy(temp->acc_type, p->acc_type);
            temp-> age=p->age;
            temp-> phone=p->phone;
            temp-> amt=p->amt; 
            temp-> month=p->month;
            temp-> day=p->day;
            temp-> year=p->year;
            printf("Available Account balance: %.2f\n",temp->amt);
        }
        else
        {
            *see=0;
        }
        return 0;
    }
}