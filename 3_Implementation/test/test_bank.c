#include"bank.h"
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
    acc=add(acc,'ABC',123456,21,'Pune','Indian',85697562,2000.00,'Saving',2000,4,9,2021);
    TEST_ASSERT_EQUAL(123456,acc->acc_no);
    TEST_ASSERT_EQUAL(21,acc->age);
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_add);

    return UNITY_END();
}