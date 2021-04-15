#include "./inc/bank.h"
info *(* fp1)(info *,char *,int,int,char *,char *,int,char *,float,int,int,int)=newacc;
user (*fp2)(info *,char *,int ,int ,char *,char *,int ,char *,float ,int ,int ,int )=add;
user (*fp3)(info *,int,int,int)=update;
user (*fp4)(float,info *,info *,int *)=deposit;
user (*fp5)(info *, int , info *, int *)=search;
user (*fp6)(info *,float,info *,int *)=withdraw;
user (*fp7)(info *)=display;
int main()
{
    
    info *acc = NULL;
    info temp = {0};
    int see;
    int option;
    while(1)
{
    /**
     * @brief Dashboard
     * 
     */
    printf("1: Create a new account.\n");
    printf("2: Add information.\n");
    printf("3: Update information\n");
    printf("4: Search.\n");
    printf("5: Desposit.\n");
    printf("6: Withdraw.\n");
    printf("7: Display.\n");
    printf("Press 0 to exit.\n");
    printf("Enter the choice: \n");
    scanf("%d",&option);
    switch (option)
    {
            char name[60];
            int cust_id;
            int age;
            char address[100];
            char citizenship[100];
            int phone;
            float balance;
            char acc_type[100];
            float amt;
            int month;
            int day;
            int year;

        case 1:
        {
            /**
             * @brief Case1: To create new bank account.
             * 
             */
            printf("Enter Account number: \n");
            scanf("%d",&cust_id);
            printf("Enter your name: \n");
            scanf("%50s",name);
            printf("Enter your age: \n");
            scanf("%d",&age);
            printf("Enter your permanent address: \n");
            scanf("%60s",address);
            printf("Enter your citizenship: \n");
            scanf("%10s",citizenship);
            printf("Phone Number: \n");
            scanf("%d",&phone);
            printf("Enter the balance you want to keep in the account: \n");
            scanf("%f",&amt);
            printf("Account type: \n");
            scanf("%10s",acc_type);
            printf("Enter you birth date: \n");
            scanf("%d-%d-%d",&day,&month,&year);
            printf("****ACCOUNT CREATED****\n\n");
            acc=(*fp1)(acc,name,cust_id,age,address,citizenship,phone,acc_type,amt,month,day,year);
            break;
        }

        case 2:
        {
            /**
             * @brief Case2: To add information to the account.
             * 
             */
            printf("Enter account number: \n");
            scanf("%d",&cust_id);
            printf("Enter your name: \n");
            scanf("%50s",name);
            printf("Enter your age: \n");
            scanf("%d",&age);
            printf("Enter your permanent address: \n");
            scanf("%60s",address);
            printf("Enter your citizenship: \n");
            scanf("%10s",citizenship);
            printf("Phone Number: \n");
            scanf("%d",&phone);
            printf("Enter the balance you want to keep in the account: \n");
            scanf("%f",&amt);
            printf("Account type: \n");
            scanf("%10s",acc_type);
            printf("Enter you birth date: \n");
            scanf("%d %d %d",&day,&month,&year);

            user id = (*fp2)(acc,name,cust_id,age,address,citizenship,phone,acc_type,amt,month,day,year);
            break;
        }
        case 3:
        {
            /**
             * @brief Case3: Update specific information.
             * 
             */
            printf("Enter account number: \n");
            scanf("%d",&cust_id);

            user id = (*fp5)(acc,cust_id,&temp,&see);
            if(see==1)
            {
                printf("Account found with Acc no. %d \n:",acc->acc_no);
                int op;
                printf("Choose the option you want to update:\n");
                printf("1: Update name: \n");
                printf("2: Update age: \n");
                printf("3: Update address: \n");
                printf("4: Update phone number: \n");
                printf("5: Update birth date: \n");
                scanf("%d",&op);
                switch (op)
                {
                    case 1: printf("Insert desired name:\n");
                            scanf("%50s",name);
                            break;
                    case 2: printf("Insert desired age:\n");
                            scanf("%d",&age);
                            break;
                    case 3: printf("Insert expected address:\n");
                            scanf("%60s",address);
                            break;
                    case 4: printf("Insert phone number:\n");
                            scanf("%d",&phone);
                            break;
                    case 5: printf("Insert birth date:\n");
                            scanf("%d-%d-%d",&day,&month,&year);
                            break;
                }
                user id = (*fp3)(acc,cust_id,op,0);
                printf("***RECORD UPDATED***\n");
                break;
            }
            else
            {
                printf("NO RECORD FOUND\n");
                break;
            }
        }
        case 4:
        {
            /**
             * @brief Case4: Search information using existing account number.
             * 
             */
             printf("Enter account number: \n");
            scanf("%d",&cust_id);

            user id = (*fp5)(acc,cust_id,&temp,&see);
            if(see==1)
            {
                printf("Name: %s\n",temp.name);
                printf("Age: %d\n",temp.age);
                printf("Balance: %f\n",temp.amt);
                printf("Address: %s\n",temp.address);
                printf("Citizenship: %s\n",temp.citizenship);
                printf("Phone number: %d\n",temp.phone);
                printf("Account type: %s\n",temp.acc_type);
                break;
            }
            else
            {
                printf("ACCOUNT NOT FOUND\n");
                break;
            }
        }
        case 5:
        {
            /**
             * @brief Case5: Deposit amount to the bank account.
             * 
             */
            printf("Enter account number: \n");
            scanf("%d",&cust_id);

            user id = (*fp5)(acc,cust_id,&temp,&see);
            if(see==1)
            {
                printf("Enter the ammount you want to deposit:\n");
                scanf("%f",&acc->amt);
                user id = (*fp4)(amt,acc,&temp,&see);
                break;
            }
        }
        case 6:
        {
            /**
             * @brief Case6: Withdraw amount from existing balance
             * 
             */
            printf("Enter account number: \n");
            scanf("%d",&cust_id);
            float withdrawalAmount;

            user id = (*fp5)(acc,cust_id,&temp,&see);
            if(see==1)
            {
                printf("Enter the ammount you want to withdraw:\n");
                scanf("%f",&withdrawalAmount);
                user id = (*fp6)(acc,withdrawalAmount,acc,&see);
                break;
            }
        }
        case 7:
        {
            /**
             * @brief Case7: Display specific account information
             * 
             */
            (*fp7)(acc);
            break;
        }
        default:printf("Invalid option.\n");
                return 0;
                break;
    }
  }  
}




