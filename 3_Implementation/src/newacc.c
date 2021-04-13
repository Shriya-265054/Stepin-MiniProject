#include "bank.h"

info *newacc(info *acc, char *name,int cust_id,int age,char *address,char *citizenship,int phone,float balance,char *acc_type,float amt,int month,int day,int year)
{
info *new_acc;
new_acc=(info *)malloc(sizeof(info));

new_acc->acc_no= cust_id;
strcpy (new_acc->name, name);
strcpy(new_acc->address,address);
strcpy(new_acc->citizenship,citizenship);
strcpy(new_acc->acc_type,acc_type);
new_acc-> age=age;
new_acc-> phone=phone;
new_acc->balance=balance;
new_acc-> amt=amt;
new_acc-> month=month;
new_acc-> day=day;
new_acc-> year=year;
 
if(acc == NULL)
{
    acc=new_acc;
    return acc;
}
else
{
    add(acc,name,cust_id,age,address,citizenship,phone,balance,acc_type,amt,month,day,year);
    free(new_acc);
    return acc;
}

}

