#include"../inc/bank.h"
#include"unity.h"

info *acc=NULL;

void setUp()
{

}
void tearDown()
{

}
void test_add(void)
{
    acc=add(acc,'ABC',123456,21,'xyz','IN',85697562,'S',2000.00,492021);
    TEST_ASSERT_EQUAL(123456,acc->acc_no);
    TEST_ASSERT_EQUAL(21,acc->age);
}

void test_deposit(void)
{
    
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_add);
    RUN_TEST(test_deposit);

    return UNITY_END();
}