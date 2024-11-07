#include "../Unity/src/unity.h"
#include "libft.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_ft_isalpha(void) {
	TEST_ASSERT(ft_isalpha('a'));
	TEST_ASSERT_FALSE(ft_isalpha('3'));
}

void test_ft_isdigit(void) {
	TEST_ASSERT(ft_isdigit('3'));
	TEST_ASSERT_FALSE(ft_isdigit('a'));
}

void test_ft_strlen(void) {
	TEST_ASSERT_EQUAL_INT(ft_strlen("Hello World"), 11);
}

void test_ft_substr(void) {
	char *result = ft_substr("Hello World", 6, 5);
	TEST_ASSERT_EQUAL_STRING(result, "World");
	free(result);

	result = ft_substr("Hello World", 12, 5);
	TEST_ASSERT_EQUAL_STRING(result, "");
	free(result);

	result = ft_substr("Hello World", 6, 122);
	TEST_ASSERT_EQUAL_STRING(result, "World");
	free(result);
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_ft_isalpha);
    RUN_TEST(test_ft_isdigit);
    RUN_TEST(test_ft_strlen);
    RUN_TEST(test_ft_substr);
    return UNITY_END();
}
