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
	{'d', convert}
	{'i', convert}
	{'b', convert}
	{'u', convertu}
	{'o', convert}
	{'x', convert}
	{'X', convert}
	{'%', _putchar}
	{'\0', NULL}
}
	i = 0;
	while (vars[i] != NULL)
	{
		if 
	}
}
