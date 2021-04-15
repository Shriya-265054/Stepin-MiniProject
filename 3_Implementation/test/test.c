#include"../inc/bank.h"
#include"../unity/unity.h"

info *acc=NULL;
info *temp;
void setUp()
{

}
void tearDown()
{

}
int acc_no;
char name[60];
int age;
char address[100];
char citizenship[20];
int phone;
char acc_type[10];
float amt;
int month;
int day;
int year;
void test_newacc(void)
{
    /**
     * @brief Test case for creating new bank account.
     * 
     */
    acc=newacc(acc,"ABC",123456,21,"xyz","IN",85697562,"S",2000.00,4,9,2021);
    TEST_ASSERT_EQUAL(123456,acc->acc_no);
    TEST_ASSERT_EQUAL(21,acc->age);
}
void test_search(void)
{
    info temp={0};
    int cust_id=123;
    int flag=0;
    TEST_ASSERT_EQUAL(SUCCESS,search(acc,cust_id,&temp,&flag));
    TEST_ASSERT_EQUAL(1,flag);
    cust_id=12;
    TEST_ASSERT_EQUAL(SUCCESS,search(acc,cust_id,&temp,&flag));
    TEST_ASSERT_EQUAL(0,flag);
}
void test_add(void)
{
    /**
     * @brief Test case for adding information to the bank account.
     * 
     */
    acc_no = 1234 ;
    strcpy(name, "def");
    strcpy(address, "pqr");
    strcpy(citizenship,"NYC");
    strcpy(acc_type, "C");
    age=45;
    phone=256864634;
    amt=50000.00;
    day=3;month=9;year=1999;
   TEST_ASSERT_EQUAL(SUCCESS,add(acc,name,acc_no,age,address,citizenship,phone,acc_type,amt,day,month,year));
   
}
void test_update(void)
{
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,123,2,1));
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,1234,6,1));
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,123,7,1));
    TEST_ASSERT_EQUAL(SUCCESS,update(acc,123,1,1));
}
void test_deposit(void)
{
    amt=200.00;
    int see=1;
    info temp={0};
    TEST_ASSERT_EQUAL(2200,deposit(amt,acc,&temp,&see));
}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_newacc);
    RUN_TEST(test_add);
    RUN_TEST(test_update);
    RUN_TEST(test_search);
    RUN_TEST(test_deposit);

    return UNITY_END();
}
