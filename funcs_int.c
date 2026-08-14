#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>

/**
* get_func - choosing the correct function for printf.
*
*
*
*
* Return: function being used
*/

char *intconv(va_list *arg, char *buff)
{
	return (convert(va_arg(*arg, int), buff, 10));
}