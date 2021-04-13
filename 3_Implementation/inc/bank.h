#ifndef __BANK_H__
#define __BANK_H__

#include<stdio.h>
#include<string.h>
#include<malloc.h>

typedef enum user{
    ERROR_NULL_PTR = -2,
    SUCCESS = 0,
    ACC_EXISTS=1,
    NO_ACC_EXIST=2,
    DATE_INCORRECT=3,
    INVALID_NAME=4,
    EXISTS=5
}user;

typedef struct info{
    char name[60];
    int acc_no;
    int age;
    char address[60];
    char citizenship[15];
    int phone;
    float balance;
    char acc_type[10];
    float amt;
    int month;
    int day;
    int year;
    struct info *nt;
}info;


info *newacc(info *,char *,int,int,char *,char *,int,float,char *,float,int,int,int);

user add(info *,char *,int ,int ,char *,char *,int ,float,char *,float ,int ,int ,int );

user update(info *,int,int,int);

user deposit(info *,float,int,info *,int *);

user search(info *, int , info *, int *);

user withdraw(info *,int , info *, float ,int *);

user display(info *);

#endif