#include"../inc/bank.h"
#include"../unity/unity.h"

info *acc=NULL;

void setUp()
{

}
void tearDown()
{

}
void test_newacc(void)
{
    acc=newacc(acc,"ABC",123456,21,"xyz","IN",85697562,"S",2000.00,4,9,2021);
    TEST_ASSERT_EQUAL(123456,acc->acc_no);
    TEST_ASSERT_EQUAL(21,acc->age);
}
void test_search(void)
{
    info temp={0};
    int cust_id=123;
    int see=0;
    TEST_ASSERT_EQUAL(SUCCESS,search(acc,cust_id,&temp,&see));
    TEST_ASSERT_EQUAL(1,see);
    cust_id=12;
    search(acc,cust_id,&temp,&see);
    TEST_ASSERT_EQUAL(0,see);
}
void test_add(void)
{
   TEST_ASSERT_EQUAL(SUCCESS,add(acc,"pqr",1234,45,"def","NYC",256864634,"C",50000.00,3,9,1999));
   TEST_ASSERT_EQUAL("pqr",acc->name);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_newacc);
    RUN_TEST(test_add);
    RUN_TEST(test_search);

    return UNITY_END();
}
