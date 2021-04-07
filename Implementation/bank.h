#ifndef __BANK_H__
#define __BANK_H__

typedef struct date
{
    int month,day,year;
}date;

typedef struct 
{

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;

}add,upd,check,rem,transaction;

float interest(float t,float amount,int rate);
void fordelay(int j);
void new_acc();
void view_list();
void edit(void);
void transact(void);
void erase(void);
void see(void);
void close(void);
void menu(void);

#endif