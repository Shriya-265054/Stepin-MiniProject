#include"bank.h"
info *(* fp1)(info *,char *,int,int,char *,char *,int,float,char *,float,int,int,int)=newacc;
user (*fp2)(info *,char *,int ,int ,char *,char *,int ,float,char *,float ,int ,int ,int )=add;
user (*fp3)(info *,int,int,int)=update;
user (*fp4)(info *,float,int,info *,int *)=deposit;
user (*fp5)(info *, int , info *, int *)=search;
user (*fp6)(info *,int , info *, float ,int *)=withdraw;
user (*fp7)(info *)=display;
int main()
{
    
    info *acc = NULL;
    info i;
    info temp = {0};
    int see;
    int option;

    while(1)
{
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
        if(option == 0)
       {
            break;
       }
       if (option >=1 && option <=7)
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
            scanf("%f",&balance);
            printf("Account type: \n");
            scanf("%10s",acc_type);
            printf("Enter you birth date: \n");
            scanf("%d - %d - %d",&day,&month,&year);
            printf("****ACCOUNT CREATED****\n\n");
            acc=(*fp1)(acc,name,cust_id,age,address,citizenship,phone,balance,acc_type,amt,month,day,year);
            break;
        }

        case 2:
        {
            printf("Enter account number: \n");
            scanf("%d",&cust_id);
            printf("Enter your name: \n");
            scanf("%s",name);
            printf("Enter your age: \n");
            scanf("%d",&age);
            printf("Enter your permanent address: \n");
            scanf("%s",address);
            printf("Enter your citizenship: \n");
            scanf("%s",citizenship);
            printf("Phone Number: \n");
            scanf("%d",&phone);
            printf("Enter the balance you want to keep in the account: \n");
            scanf("%f",&balance);
            printf("Account type: \n");
            scanf("%s",acc_type);
            printf("Enter you birth date: \n");
            scanf("%d %d %d",&day,&month,&year);

            user id = (*fp2)(acc,name,cust_id,age,address,citizenship,phone,balance,acc_type,amt,month,day,year);
            break;
        }
        case 3:
        {
            printf("Enter account number: \n");
            scanf("%d",&cust_id);

            user id = (*fp5)(acc,cust_id,acc,&see);
            if(see==1)
            {
                printf("Account found with Acc no. %d \n:",temp.acc_no);
                int op;
                printf("Choose the option you want to update:\n");
                printf("!: Update name: \n");
                printf("2: Update age: \n");
                printf("3: Update address: \n");
                printf("4: Update phone number: \n");
                printf("5: Update birth date: \n");
                scanf("%d",&op);
                switch (op)
                {
                    case 1: scanf("%50s",name);
                            break;
                    case 2: scanf("%d",&age);
                            break;
                    case 3: scanf("%50s",address);
                            break;
                    case 4: scanf("%d",&phone);
                            break;
                    case 5:scanf("%d-%d-%d",&day,&month,&year);
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
             printf("Enter account number: \n");
            scanf("%d,&cust_id");

            user id = (*fp5)(acc,cust_id,acc,&see);
            if(see==1)
            {
                printf("Name: %s\n",temp.name);
                printf("Age: %d\n",temp.age);
                printf("Balance: %d\n",temp.balance);
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
            printf("Enter account number: \n");
            scanf("%d,&cust_id");

            user id = (*fp5)(acc,cust_id,acc,&see);
            if(see==1)
            {
                printf("Enter the ammount you want to deposit:\n");
                scanf("%f",amt);
                user id = (*fp4)(acc,amt,cust_id,acc,&see);
                printf("Balance: %.2f\n",temp.balance);
                break;
            }
        }
        case 6:
        {
            printf("Enter account number: \n");
            scanf("%d,&cust_id");

            user id = (*fp5)(acc,cust_id,acc,&see);
            if(see==1)
            {
                printf("Enter the ammount you want to deposit:\n");
                scanf("%f",amt);
                user id = (*fp6)(acc,cust_id,acc,amt,&see);
                printf("Balance: %.2f\n",temp.balance);
                break;
            }
        }
        case 7:
        {
            printf("%d",acc->acc_no);
            (*fp7)(acc);
            break;
        }
        default:printf("Invalid option.\n");
    }
    }
    
   
}

}





