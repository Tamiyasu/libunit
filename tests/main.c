#include "inc/tests.h"
#include "../framework/inc/libunit.h"

int	main(int argc, char **argv)
{
	char	*func;
	int		ret;

	ret = 1;
	puts("\n\n  ^~^  ,");
	puts(" ('Y') )");
	puts(" /   \\/  \x1b[36;1;4m42 Unit Tests\x1b[0m\x1b[39m  __QQ");
	puts("(\\|||/)                (_)_\">>");
	puts("                      /\n");
	func = "strlen";
	if (argc == 1 || 0 == strncmp(argv[1], func, strlen(func) + 1))
		ret *= strlen_launcher();
	func = "toupper";
	if (argc == 1 || 0 == strncmp(argv[1], func, strlen(func) + 1))
		ret *= toupper_launcher();
	func = "tolower";
	if (argc == 1 || 0 == strncmp(argv[1], func, strlen(func) + 1))
		ret *= tolower_launcher();
	func = "atoi";
	if (argc == 1 || 0 == strncmp(argv[1], func, strlen(func) + 1))
		ret *= atoi_launcher();
	func = "check";
	if (argc == 1 || 0 == strncmp(argv[1], func, strlen(func) + 1))
		ret *= check_launcher();
	return (ret - 1);
}
