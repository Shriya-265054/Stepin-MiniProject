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

        if(option == 1)
        {
            printf("Enter Account number: \n");
            scanf("%d",&cust_id);
            printf("Enter your name: \n");
            scanf("%3s",name);
            printf("Enter your age: \n");
            scanf("%d",&age);
            printf("Enter your permanent address: \n");
            scanf("%3s",address);
            printf("Enter your citizenship: \n");
            scanf("%3s",citizenship);
            printf("Phone Number: \n");
            scanf("%d",&phone);
            printf("Enter the balance you want to keep in the account: \n");
            scanf("%f",&balance);
            printf("Account type: \n");
            scanf("%3s",acc_type);
            printf("Enter you birth date: \n");
            scanf("%d %d %d",&day,&month,&year);
            acc=(*fp1)(acc,name,cust_id,age,address,citizenship,phone,balance,acc_type,amt,month,day,year);
           

        }

        if (option == 2)
        {
            printf("Enter account number: \n");
            scanf("%d",&cust_id);
            printf("Enter your name: \n");
            scanf("%3s",name);
            printf("Enter your age: \n");
            scanf("%d",&age);
            printf("Enter your permanent address: \n");
            scanf("%3s",address);
            printf("Enter your citizenship: \n");
            scanf("%3s",citizenship);
            printf("Phone Number: \n");
            scanf("%d",&phone);
            printf("Enter the balance you want to keep in the account: \n");
            scanf("%f",&balance);
            printf("Account type: \n");
            scanf("%3s",acc_type);
            printf("Enter you birth date: \n");
            scanf("%d %d %d",&day,&month,&year);

            user id = (*fp2)(acc,name,cust_id,age,address,citizenship,phone,balance,acc_type,amt,month,day,year);
            
        }
        if(option == 3)
        {
            printf("Enter account number: \n");
            scanf("%d,&cust_id");

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
                user id = (*fp3)(acc,cust_id,op,0);
                printf("***RECORD UPDATED***\n");
            }
            else
            {
                printf("NO RECORD FOUND\n");
            }
        }
        if(option == 4)
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
            }
            else
            {
                printf("ACCOUNT NOT FOUND\n");
            }
        }
        if(option == 5)
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
            }
        }
        if(option == 6)
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
            }
        }
        if(option == 7)
        {
            printf("%d",acc->acc_no);
            (*fp7)(acc);
        }
    }
   
}

}





