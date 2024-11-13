/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unity_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:24:22 by uschmidt          #+#    #+#             */
/*   Updated: 2024/11/13 17:16:36 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Unity/src/unity.h"
#include "libft.h"

void	setUp(void)
{
}

void	tearDown(void)
{
}

void	test_ft_atoi(void)
{
		TEST_ASSERT_EQUAL_INT(470,ft_atoi( "470"));
		TEST_ASSERT_EQUAL_INT(-72123, ft_atoi("-72123"));
		TEST_ASSERT_EQUAL_INT(0, ft_atoi("l470"));
		TEST_ASSERT_EQUAL_INT(47, ft_atoi("47t0"));
		TEST_ASSERT_EQUAL_INT(0, ft_atoi("-f47t0"));
		TEST_ASSERT_EQUAL_INT(-2147483648, ft_atoi("-2147483648"));
}

void	test_ft_bzero(void)
{
	char str[] = "hello";
	ft_bzero(str, 3);
	TEST_ASSERT_EQUAL_UINT8_ARRAY(str, "\0\0\0", 3);
}

void	test_ft_calloc(void)
{
		int	*calloc_arr = (int *)ft_calloc(3, sizeof(int));
		int	expected_arr[3] = {0, 0, 0};
		TEST_ASSERT_NOT_NULL(calloc_arr);
		TEST_ASSERT_EQUAL_INT_ARRAY (expected_arr, calloc_arr, 3);
		free(calloc_arr);

		calloc_arr = (int *)ft_calloc(2147483647, sizeof(int));
		TEST_ASSERT_NULL(calloc_arr);
		free(calloc_arr);

		calloc_arr = (int *)ft_calloc(0, sizeof(int));
		TEST_ASSERT_NOT_NULL(calloc_arr);
		free(calloc_arr);
}

void	test_ft_isalpha(void)
{
	TEST_ASSERT(ft_isalpha('a'));
	TEST_ASSERT_FALSE(ft_isalpha('3'));
}

void	test_ft_isdigit(void)
{
	TEST_ASSERT(ft_isdigit('3'));
	TEST_ASSERT_FALSE(ft_isdigit('a'));
}

void	test_ft_isalnum(void)
{
	TEST_ASSERT(ft_isalnum('3'));
	TEST_ASSERT(ft_isalnum('a'));
	TEST_ASSERT_FALSE(ft_isdigit(';'));
}

void	test_ft_isascii(void)
{
	TEST_ASSERT(ft_isascii('3'));
	TEST_ASSERT(ft_isascii('h'));
	TEST_ASSERT_FALSE(ft_isascii(-1));
}

void	test_ft_isprint(void)
{
	TEST_ASSERT(ft_isprint('3'));
	TEST_ASSERT_FALSE(ft_isprint('\n'));
}

void	test_ft_memset(void)
{
	char  str_1[] = "world";
	char  str_2[] = "**rld";
	ft_memset(str_1, '*', 2);
	TEST_ASSERT_EQUAL_MEMORY(str_1, str_2, 5);
	ft_memset(str_1, 'z', 5);
	ft_memset(str_2, 'z', 5);
	TEST_ASSERT_EQUAL_MEMORY(str_1, str_2, 5);
}

void	test_ft_memchr(void) {
	const int	arr[5] = {69,2,563,3,5};
	int	*result = (int *)ft_memchr(arr, 3, 5 * sizeof(int));
	TEST_ASSERT_EQUAL_INT(3, *result);
	char	memchr_str[6] = "Hello!";
	char	*result_2 = (char *)ft_memchr(memchr_str, '!', 5 * sizeof(char));
	TEST_ASSERT_NULL(result_2);
	result_2 = (char *)ft_memchr(memchr_str, 'o', 5 * sizeof(char));
	TEST_ASSERT_EQUAL_UINT8('o', *result_2);
	}

void	test_ft_memcmp(void) {
	char	memcmp_1[7] = "He\0lo!";
	char	memcmp_2[8] = "He\0ll-o!";
	int result = ft_memcmp(memcmp_1, memcmp_2, 4);	
	TEST_ASSERT_EQUAL_INT(0, result);
	result = ft_memcmp(memcmp_1, memcmp_2, 6);	
	TEST_ASSERT_EQUAL_INT(('o' - 'l'), result);
	}

void	test_ft_memcpy(void) {
	char  str_1[] = "world";
	char  str_2[] = "**rld";
	ft_memcpy(str_2, str_1, 2);
	TEST_ASSERT_EQUAL_MEMORY(str_1, str_2, 5);
}

void	test_ft_memmove(void) {
	char  str_1[] = "world";
	char  str_2[] = "*****";
	ft_memmove(str_2, str_1, 5);
	TEST_ASSERT_EQUAL_MEMORY(str_1, str_2, 5);
}

void	test_ft_split(void)
{
		char	to_split[19] = "This_is_a_splitter";
		char	splitter = '_';
		char	**result = ft_split(to_split, splitter);
		int		i;
		i = 0;
		while (result[i] != NULL)
		{
				printf("%s\n", result[i]);
				i++;
		}
		TEST_ASSERT_EQUAL_INT(4, i);
		i=0;
		while (result[i])
				free(result[i++]);
		free(result);
}

void	test_ft_strdup(void)
{
		char	strdup_str[12] = "Hello World";
		char	*strdup_dup = ft_strdup(strdup_str);
		TEST_ASSERT_NOT_NULL(strdup_dup);
		TEST_ASSERT_EQUAL_STRING(strdup_str, strdup_dup);
		free(strdup_dup);
}

void	test_ft_strlen(void) {
	TEST_ASSERT_EQUAL_INT(ft_strlen("Hello World"), 11);
}

void	test_ft_strnstr(void) {
	char str_strnstr_big[12] = "Hello World";
	char str_strnstr_little[6] = "World";
	char	*result = ft_strnstr(str_strnstr_big, str_strnstr_little, 15);
	TEST_ASSERT_EQUAL_STRING("World", result);
	result = ft_strnstr(str_strnstr_big, str_strnstr_little, 10);
	TEST_ASSERT_NULL(result);
}

void	test_ft_strchr(void) {
	char *str_strchr = "Hello World";
	TEST_ASSERT_EQUAL_STRING(ft_strchr(str_strchr, 'o'), "o World");

	str_strchr = "Hello World";
	TEST_ASSERT_EQUAL_STRING(ft_strchr(str_strchr, '\0'), "");

	str_strchr = "Hello World";
	TEST_ASSERT_NULL(ft_strchr(str_strchr, 'n'));
}

void	test_ft_strrchr(void) {
	char *str_strrchr = "Hello World";
	TEST_ASSERT_EQUAL_STRING(ft_strrchr(str_strrchr, 'o'), "orld");

	str_strrchr = "Hello World";
	TEST_ASSERT_EQUAL_STRING(ft_strrchr(str_strrchr, '\0'), "");

	str_strrchr = "Hello World";
	TEST_ASSERT_NULL(ft_strrchr(str_strrchr, 'n'));
}

void	test_ft_strncmp(void) {
	unsigned char strncmp_str_1[6] = "Hello";
	unsigned char strncmp_str_2[5] = "Help";
	TEST_ASSERT_EQUAL_INT(0, ft_strncmp(strncmp_str_1, strncmp_str_2, 3));
	TEST_ASSERT_LESS_THAN(0, ft_strncmp(strncmp_str_1, strncmp_str_2, 5));
}

void	test_ft_strlcat(void) {
	const char *str_strlcat = "Worldjsdhalk";
	size_t size = 12;
	char dst[12] = "Hello ";
	size_t len = ft_strlcat(dst, str_strlcat, size);
	TEST_ASSERT_EQUAL_STRING(dst, "Hello World");
	TEST_ASSERT_EQUAL_INT(len, 18);
}

void	test_ft_strlcpy(void) {
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

void	test_ft_strtrim(void) {
		char const	trim_str[15] = " * He* *llo**";
		char const	to_trim[3] = "* ";
		char	*result = ft_strtrim(trim_str, to_trim);
		TEST_ASSERT_NOT_NULL(result);
		TEST_ASSERT_EQUAL_STRING("He* *llo", result);
		free(result);
}

void	test_ft_substr(void) {
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

void	test_ft_toupper(void) {
	TEST_ASSERT_EQUAL_UINT8(ft_toupper('g'), 'G');
	TEST_ASSERT_EQUAL_UINT8(ft_toupper('%'), '%');
}

	void	test_ft_tolower(void) {
	TEST_ASSERT_EQUAL_UINT8(ft_tolower('G'), 'g');
	TEST_ASSERT_EQUAL_UINT8(ft_toupper('%'), '%');
}

// not needed when using generate_test_runner.rb
int	main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_ft_atoi);
	RUN_TEST(test_ft_bzero);
	RUN_TEST(test_ft_calloc);
	RUN_TEST(test_ft_isalpha);
	RUN_TEST(test_ft_isdigit);
	RUN_TEST(test_ft_isalnum);
	RUN_TEST(test_ft_isascii);
	RUN_TEST(test_ft_isprint);
	RUN_TEST(test_ft_memchr);
	RUN_TEST(test_ft_memcpy);
	RUN_TEST(test_ft_memcmp);
	RUN_TEST(test_ft_memset);
	RUN_TEST(test_ft_memmove);
	RUN_TEST(test_ft_split);
	RUN_TEST(test_ft_strchr);
	RUN_TEST(test_ft_strdup);
	RUN_TEST(test_ft_strncmp);
	RUN_TEST(test_ft_strnstr);
	RUN_TEST(test_ft_strrchr);
	RUN_TEST(test_ft_strlen);
	RUN_TEST(test_ft_strlcat);
	RUN_TEST(test_ft_strlcpy);
	RUN_TEST(test_ft_strtrim);
	RUN_TEST(test_ft_substr);
	RUN_TEST(test_ft_toupper);
	RUN_TEST(test_ft_tolower);
	return UNITY_END();
}
