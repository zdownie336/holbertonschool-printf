#include <stdarg.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i;

	/**
	* grabbed from character after percentage
	*/
	switch (format[i])
	{
		case 'c':
		case 's':
		case '%':
