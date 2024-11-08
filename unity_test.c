#include "../Unity/src/unity.h"
#include "libft.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_ft_bzero(void) {
  char str[] = "hello";
  bzero(str, 3);
  TEST_ASSERT_EQUAL_UINT8_ARRAY(str, "\0\0\0", 3);
}

void test_ft_isalpha(void) {
	TEST_ASSERT(ft_isalpha('a'));
	TEST_ASSERT_FALSE(ft_isalpha('3'));
}

void test_ft_isdigit(void) {
	TEST_ASSERT(ft_isdigit('3'));
	TEST_ASSERT_FALSE(ft_isdigit('a'));
}

void test_ft_isalnum(void) {
	TEST_ASSERT(ft_isalnum('3'));
	TEST_ASSERT(ft_isalnum('a'));
	TEST_ASSERT_FALSE(ft_isdigit(';'));
}

void test_ft_isascii(void) {
	TEST_ASSERT(ft_isascii('3'));
	TEST_ASSERT(ft_isascii('h'));
	TEST_ASSERT_FALSE(ft_isascii(-1));
}

void test_ft_isprint(void) {
	TEST_ASSERT(ft_isprint('3'));
  TEST_ASSERT_FALSE(ft_isprint('\n'));
}

void test_ft_memset(void) {
  char  str_1[] = "world";
  char  str_2[] = "**rld";
  ft_memset(str_1, '*', 2);
  TEST_ASSERT_EQUAL_MEMORY(str_1, str_2, 5);
  ft_memset(str_1, '*', 5);
  ft_memset(str_2, '*', 5);
  TEST_ASSERT_EQUAL_MEMORY(str_1, str_2, 5);
}

void test_ft_memcpy(void) {
  char  str_1[] = "world";
  char  str_2[] = "**rld";
  ft_memcpy(str_2, str_1, 2);
  TEST_ASSERT_EQUAL_MEMORY(str_1, str_2, 5);
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
    RUN_TEST(test_ft_bzero);
    RUN_TEST(test_ft_isalpha);
    RUN_TEST(test_ft_isdigit);
    RUN_TEST(test_ft_isalnum);
    RUN_TEST(test_ft_isascii);
    RUN_TEST(test_ft_memset);
    RUN_TEST(test_ft_memcpy);
    RUN_TEST(test_ft_strlen);
    RUN_TEST(test_ft_substr);
    return UNITY_END();
}
