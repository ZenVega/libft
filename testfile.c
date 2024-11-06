#include "libft.h"
#include <unistd.h>

// to compile and run this file use 'cc -c testfile.c -o testfile.o '
// to link it to the library use 'cc -o testfile testfile.o -L. -l ft'

void print_error (char* error_msg) {
  printf("\033[1;31m");
  printf("%s\n", error_msg);
  printf("\033[0m");
}

void print_success(char *success_msg) {
  printf("\033[0;32m");
  printf("%s\n", success_msg);
  printf("\033[0m");
}

int	main()
{
	// ft_isalpha
	printf("\nRunning tests on ft_isalpha\n\n");
	if (ft_isalpha('a'))
		print_success("a is alphabetical");
	else
		print_error("Error in ft_isalpha");
	if (!ft_isalpha('3'))
		print_success("3 is not alphabetical");
	else
		print_error("Error in ft_isalpha");

	// ft_isdigit
	printf("\nRunning tests on ft_isdigit\n\n");
	if (ft_isdigit('3'))
		print_success("3 is numeric");
	else
		print_error("Error in ft_isdigit");
	if (!ft_isdigit('a'))
		print_success("a is not numeric");
	else
		print_error("Error in ft_isdigit");

	// ft_strlen
	printf("\nRunning tests on ft_strlen\n\n");
	if (ft_strlen("Hello World") == 11)
		print_success("'Hello World' has 11 characters");
	else
		print_error("Error in ft_strlen");
	if (ft_strlen("") == 0)
		print_success("'' has 0 characters");
	else
		print_error("Error in ft_strlen");
	
	// ft_strcmp
	printf("\nRunning tests on ft_strcmp\n\n");
	if (ft_strcmp("Hello World", "Hello World") == 0)
		print_success("Strings are Identical");
	else
		print_error("Error in ft_strcmp");
	if (ft_strcmp("Hello World", "Hello Word") != 0)
		print_success("Strings are not identical");
	else
		print_error("Error in ft_strcmp");
	
	// ft_substr
	//printf("\nRunning tests on ft_substr\n\n");
	//har const *s = "Hello World";
	//char *result_substr = ft_substr(s,6,5);
	//if ( result_substr == "World")
	//	printf("Expected output '%s'\n", reslt_substr);
	//else
	//	printf("'%s' is not the expected output\n", reslt_substr);
}
