#include "main.h"
/**
 * print_string - Print string
 * @list_arg: list.
 *
 * Return: String length.
 */

int print_string(va_list list_arg)
{
	char *ptr;
	int ptr_len;
	ptr = va_arg(list_arg, char*);
	ptr_len = print((ptr != NULL) ? ptr : "(null)");
	return (ptr_len);
}
