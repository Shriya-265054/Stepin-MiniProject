#include"../inc/bank.h"

user add(info *acc,char *name,int cust_id, int age,char *address,char *citizenship,int phone,char *acc_type,float amt,int month,int day,int year)
{
    info *new_acc, *p;
    new_acc = (info *)malloc (sizeof(info));
    new_acc->acc_no= cust_id;
    strcpy (new_acc->name, name);
    strcpy(new_acc->address,address);
    strcpy(new_acc->citizenship,citizenship);
    strcpy(new_acc->acc_type,acc_type);
    new_acc-> age=age;
    new_acc-> phone=phone;
    new_acc-> amt=amt;
    new_acc-> month=month;
    new_acc-> day=day;
    new_acc-> year=year;

    if(acc==NULL)
    {
        free(new_acc);
        return NO_ACC_EXIST;
    }
    else
    {
         p=acc;
        while (p->nt !=NULL)
        {
             p=p->nt;
        }
        p->nt = new_acc;
        return SUCCESS;
}
}