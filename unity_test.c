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
	ft_memset(str_1, 'z', 5);
	ft_memset(str_2, 'z', 5);
	TEST_ASSERT_EQUAL_MEMORY(str_1, str_2, 5);
}

void test_ft_memcpy(void) {
	char  str_1[] = "world";
	char  str_2[] = "**rld";
	ft_memcpy(str_2, str_1, 2);
	TEST_ASSERT_EQUAL_MEMORY(str_1, str_2, 5);
}

void test_ft_memmove(void) {
	char  str_1[] = "world";
	char  str_2[] = "*****";
	ft_memmove(str_2, str_1, 5);
	TEST_ASSERT_EQUAL_MEMORY(str_1, str_2, 5);
}

void test_ft_strlen(void) {
	TEST_ASSERT_EQUAL_INT(ft_strlen("Hello World"), 11);
}

void test_ft_strchr(void) {
	char *str_strchr = "Hello World";
	TEST_ASSERT_EQUAL_STRING(ft_strchr(str_strchr, 'o'), "o World");

	str_strchr = "Hello World";
	TEST_ASSERT_EQUAL_STRING(ft_strchr(str_strchr, '\0'), "");

	str_strchr = "Hello World";
	TEST_ASSERT_NULL(ft_strchr(str_strchr, 'n'));
}

void test_ft_strrchr(void) {
	char *str_strrchr = "Hello World";
	TEST_ASSERT_EQUAL_STRING(ft_strrchr(str_strrchr, 'o'), "orld");

	str_strrchr = "Hello World";
	TEST_ASSERT_EQUAL_STRING(ft_strrchr(str_strrchr, '\0'), "");

	str_strrchr = "Hello World";
	TEST_ASSERT_NULL(ft_strrchr(str_strrchr, 'n'));
}

void test_ft_strncmp(void) {
	unsigned char strncmp_str_1[6] = "Hello";
	unsigned char strncmp_str_2[5] = "Help";
	TEST_ASSERT_EQUAL_INT(0, ft_strncmp(strncmp_str_1, strncmp_str_2, 3));
	TEST_ASSERT_LESS_THAN(0, ft_strncmp(strncmp_str_1, strncmp_str_2, 5));
}

void test_ft_strlcat(void) {
	const char *str_strlcat = "Worldjsdhalk";
	size_t size = 12;
	char dst[12] = "Hello ";
	size_t len = ft_strlcat(dst, str_strlcat, size);
	TEST_ASSERT_EQUAL_STRING(dst, "Hello World");
	TEST_ASSERT_EQUAL_INT(len, 18);
}

void test_ft_strlcpy(void) {
	const char *str = "Hello World";
	char cpy[6];
	size_t len = ft_strlcpy(cpy, str, 6);
	TEST_ASSERT_EQUAL_STRING(cpy, "Hello");
	TEST_ASSERT_EQUAL_INT(len, 11);

	len = ft_strlcpy(cpy, str, 0);
	TEST_ASSERT_EQUAL_INT(len, 11);

	str = "";
	len = ft_strlcpy(cpy, str, 6);
	TEST_ASSERT_EQUAL_INT(len, 0);
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

void test_ft_toupper(void) {
	TEST_ASSERT_EQUAL_UINT8(ft_toupper('g'), 'G');
	TEST_ASSERT_EQUAL_UINT8(ft_toupper('%'), '%');
}

	void test_ft_tolower(void) {
	TEST_ASSERT_EQUAL_UINT8(ft_tolower('G'), 'g');
	TEST_ASSERT_EQUAL_UINT8(ft_toupper('%'), '%');
}

// not needed when using generate_test_runner.rb
int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_ft_bzero);
	RUN_TEST(test_ft_isalpha);
	RUN_TEST(test_ft_isdigit);
	RUN_TEST(test_ft_isalnum);
	RUN_TEST(test_ft_isascii);
	RUN_TEST(test_ft_isprint);
	RUN_TEST(test_ft_memset);
	RUN_TEST(test_ft_memcpy);
	RUN_TEST(test_ft_memmove);
	RUN_TEST(test_ft_strchr);
	RUN_TEST(test_ft_strncmp);
	RUN_TEST(test_ft_strrchr);
	RUN_TEST(test_ft_strlen);
	RUN_TEST(test_ft_strlcat);
	RUN_TEST(test_ft_strlcpy);
	RUN_TEST(test_ft_substr);
	RUN_TEST(test_ft_toupper);
	RUN_TEST(test_ft_tolower);
	return UNITY_END();
}
