#include "unity.h"
#include "calculator.h"

/* Required by the unity test framework */
void setUp(){}
void tearDown(){}

void test_div(void)
{
    TEST_ASSERT_EQUAL(1, div(10, 10));
    TEST_ASSERT_EQUAL(0, div(10, 0));
}

int main()
{
/* Initiate the unity Test framework */
    UNITY_BEGIN();

/* Run Test funtions */
    RUN_TEST(test_div);

/* Close the unity Test Framework */
    return UNITY_END();
    return 0;
}

