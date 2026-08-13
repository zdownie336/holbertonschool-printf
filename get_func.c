#include "main.h"
#include <string.h>
#include <stddef.h>

/**
* get_func - choosing the correct function for printf.
*
*
*
*
* Return: function being used
*/

int (*get_func(char *s))(int, int)
{
	func_t vars[] = {
	{'c', _putchar}
	{'s', _putchar}
	{'d', convert(va_arg(arg, int), buff, 10)}
	{'i', convert(va_arg(arg, int), buff, 10)}
	{'b', convert(va_arg(arg, int), buff, 2)}
	{'u', convertu(va_arg(arg, long int), buff, 10)}
	{'o', convert(va_arg(arg, int), buff, 8)}
	{'x', convert(va_arg(arg, int), buff, 16)}
	{'X', convert(va_arg(arg, int), buff, 16)}
	{'%', _putchar}
	{'\0', NULL}
};
	int i;

	i = 0;
	while (vars[i] != NULL)
	{
		if (strcmp(s, vars[i].op) == 0)
		{
			return (vars[i].f)
		}
		i = i + 1;
	}
	return (NULL);
}
