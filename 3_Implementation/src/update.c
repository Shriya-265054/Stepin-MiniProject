#include "../inc/bank.h"
/**
 * @brief Update account holder's information using existing account number 
 *
 */
user update(info *acc,int cust_id,int check,int get)
{
    info *p;
    p=acc;
    if(acc==NULL)
    {
        return NO_ACC_EXIST;
    }
    else
    {
        int flag=0;
        while(p!=NULL)
        {
            if (p->acc_no== cust_id)
            {
               flag=1;
               break;
            }
            p=p->nt;
        }
        if(flag==1 && check == 0)
        {
            if(get == 1){
                char cust_name[100];
                scanf("%50s",cust_name);
                strcpy(p->name,cust_name);
            }
            if(get == 2)
            {
                int age;
                scanf("%d",&age);
                p->age=age;
            }
            if(get == 3)
            {
                int acc_no;
                scanf("%d",&acc_no);
                p->acc_no=acc_no;
            }
            if(get == 4)
            {
                char address[100];
                scanf("%60s",address);
               strcpy(p->address,address);
            }
            if(get == 5)
            {
                char citizenship[100];
                scanf("%10s",citizenship);
               strcpy(p->citizenship,citizenship);
            }
            if(get == 6)
            {
                int phone;
                scanf("%d",&phone);
                p->phone=phone;
            }
            if(get == 7)
            {
                char acc_type[100];
                scanf("%10s",acc_type);
               strcpy(p->acc_type,acc_type);
            }
            if(get == 8)
            {
                float amt;
                scanf("%f",&amt);
                p->amt=amt;
            }
            if(get == 9)
            {
                int month;
                scanf("%d",&month);
                p->month=month;

                 int day;
                scanf("%d",&day);
                p->day=day;

                 int year;
                scanf("%d",&year);
                p->year=year;
            }
            
           
        }
        return SUCCESS;
    }
}

