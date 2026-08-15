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

/**
 * wrt - writes a string to stdout
 * @temp: The string to print
 *
 * Return: amount of chars printed.
 */

int wrt(char *temp)
{
	unsigned int ind;
	int charp;

	ind = 0;
	charp = 0;
	while (temp[ind] != '\0')
	{
		charp += _putchar(temp[ind]);
		ind++;
	}
	return (charp);
}

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
	unsigned int charp;
	const char *str;
	char *(*f)(va_list *, char *buff);
	char buff[64];
	char *temp;

	va_start(arg, format);
	str = format;
	i = 0;
	charp = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '\0')
				break;
			f = func_spec(str[i]);
			if (f == NULL)
			{
				charp += _putchar(str[i - 1]);
				charp += _putchar(str[i]);
			}
			else
			{
				temp = f(&arg, buff);
				if (temp == NULL)
					temp = "(null)";
				charp += wrt(temp);
			}
		}
		else
		{
			charp += _putchar(str[i]);
		}
		i++;
	}
	va_end(arg);
	if (charp == 0)
		charp = -1;
	return (charp);
}
