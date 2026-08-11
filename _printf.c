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

	va_start(arg, format);
	str = format;
	i = 0;
	ind = 0;
	charp = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			switch (str[i])
			{
			case 'c':
				charp += _putchar(va_arg(arg, int));
				break;
			case 's':
				temp = va_arg(arg, char *);
				if (temp == 0 && temp == NULL)
				{
					temp = "(null)";
				}
					while (temp[ind] != '\0')
					{
						charp += _putchar(temp[ind]);
						ind++;
					}
				
				break;
			case '%':
				charp += _putchar(str[i]);
				break;
			}
		}
		else
		{
			charp += _putchar(str[i]);
		}
		i++;
	}
	return (charp);
}
