#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>

/**
* charconv - gets char to use.
* @arg: va_list to grab from
* @buff: buffer to write to
*
* Return: string
*/

char *charconv(va_list *arg, char *buff)
{
	buff[0] = va_arg(*arg, int);
	buff[1] = '\0';
	return (buff);
}

/**
* strconv - gets str to use.
* @arg: va_list to grab from
* @buff: buffer to write to
*
* Return: string
*/
char *strconv(va_list *arg, char *buff)
{
	buff = va_arg(*arg, char *);
	return (buff);
}

/**
* moduconv - gets char to use.
* @arg: va_list to grab from
* @buff: buffer to write to
*
* Return: string
*/
char *moduconv(va_list *arg, char *buff)
{
	(void)arg;
	buff[0] = '%';
	return (buff);
}
	