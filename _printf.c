#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/* gcc wrtest.c _printf.c -Wall -Wextra -Werror -pedantic -std=gnu89 -o a */

/**
 * _printf - writes given string and arguments to stdout
 * @format: The strings and variable args to print
 *
 * Return: Characters printed exclduing null terminator
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i;
	unsigned int ind;
	unsigned int charp;
	const char *str;
	char *temp;
	char buff[64];

	va_start(arg, format);
	str = format;
	i = 0;
	charp = 0;
	while (str[i] != '\0')
	{
		ind = 0;
		if (str[i] == '%')
		{
			i++;
			temp = func_spec(format[i], &arg, &i);
			if (temp == 0 && temp == NULL)
			{
				temp = "(null)";
			}
			while temp[ind] != '\0')
			{
				charp += _putchar(temp[ind]);
				ind ++;
			}
		/**	switch (str[i])
			{
			case 'c':
				charp += _putchar(va_arg(arg, int));
				break;
			case 's':
				temp = va_arg(arg, char *);
				if (temp == 0 && temp == NULL)
					temp = "(null)";
				while (temp[ind] != '\0')
				{
					charp += _putchar(temp[ind]);
					ind++;
				}
				break;
			case 'd':
				temp = convert(va_arg(arg, int), buff, 10);
				if (temp == 0 && temp == NULL)
					temp = "(null)";
				while (temp[ind] != '\0')
				{
					charp += _putchar(temp[ind]);
					ind++;
				}
				break;
			case 'i':
				temp = convert(va_arg(arg, int), buff, 10);
				if (temp == 0 && temp == NULL)
					temp = "(null)";
				while (temp[ind] != '\0')
				{
					charp += _putchar(temp[ind]);
					ind++;
				}
				break;
			case 'b':
				temp = convert(va_arg(arg, int), buff, 2);
				if (temp == 0 && temp == NULL)
					temp = "(null)";
				while (temp[ind] != '\0')
				{
					charp += _putchar(temp[ind]);
					ind++;
				}
				break;
			case 'u':
				temp = convertu(va_arg(arg, long int), buff, 10);
				if (temp == 0 && temp == NULL)
					temp = "(null)";
				while (temp[ind] != '\0')
				{
					charp += _putchar(temp[ind]);
					ind++;
				}
				break;
			case 'o':
				temp = convert(va_arg(arg, int), buff, 8);
				if (temp == 0 && temp == NULL)
					temp = "(null)";
				while (temp[ind] != '\0')
				{
					charp += _putchar(temp[ind]);
					ind++;
				}
				break;
			case 'x':
				temp = convert(va_arg(arg, int), buff, 16);
				if (temp == 0 && temp == NULL)
					temp = "(null)";
				while (temp[ind] != '\0')
				{
					charp += _putchar(temp[ind]);
					ind++;
				}
				break;
			case 'X':
				temp = convert(va_arg(arg, int), buff, 16);
				if (temp == 0 && temp == NULL)
					temp = "(null)";
				while (temp[ind] != '\0')
				{
					if (temp[ind] >= 'a' && temp[ind] <= 'f')
						temp[ind] -= 32;
					charp += _putchar(temp[ind]);
					ind++;
				}
				break;
			case '%':
				charp += _putchar(str[i]);
				break;
			default:
				i--;
				if (str[i + 1] != '\0')
					charp += _putchar(str[i]);
				break;
			}
		}
		else
		{
			charp += _putchar(str[i]);
		}
		i++;*/
	}
	if (charp == 0)
		charp = -1;
	return (charp);
}

/**
* get_func - choosing the correct function for printf.
*
*
*
*
* Return: function being used
*/

int func_spec(va_list *arg, unsigned int *ind)
{
	func_t prints[] = {
	{'c', _putchar}
	{'s', _putchar}
	{'d', convert(va_arg(arg, int), buff, 10)}
	{'i', convert(va_arg(arg, int), buff, 10)}
	{'b', convert(va_arg(arg, int), buff, 2)}
	{'u', convertu(va_arg(arg, long int), buff, 10)}
	{'o', convert(va_arg(arg, int), buff, 8)}
	{'x', convert(va_arg(arg, int), buff, 16)}
	{'X', convupp(va_arg(arg, int), buff, 16)}
	{'%', _putchar}
	{'\0', NULL}
};
	int i;

	i = 0;
	while (prints[i] != '\0')
	{
		if (prints = prints[ind].func)
		{
			return (prints[ind].func(arg));
		}
		i = i + 1;
	}
	return (NULL);
}
