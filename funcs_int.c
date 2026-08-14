#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>

/**
* intconv - the conversion for integars
* @arg: the arguments being passed
* @buff: the buffer to write in
*
*
* Return: converted integars
*/

char *intconv(va_list *arg, char *buff)
{
	return (convert(va_arg(*arg, int), buff, 10));
}
/**
* binconv - the conversion for integars to binary
* @arg: the arguments being passed
* @buff: the buffer to write in,
*
*
* Return: converted integars
*/

char *binconv(va_list *arg, char *buff)
{
	return (convert(va_arg(*arg, int), buff, 2));
}
/**
* hexconv - the conversion for integars to hexadecimal
* @arg: the arguments being passed
* @buff: the buffer to write in
*
*
* Return: converted integars
*/

char *hexconv(va_list *arg, char *buff)
{
	return (convert(va_arg(*arg, int), buff, 16));
}
/**
* uphexconv - the conversion for hexadecimal with capitals
* @arg: the arguments being passed
* @buff: the buffer to write in.
*
*
* Return: converted integars
*/

char *uphexconv(va_list *arg, char *buff)
{
	return (convertupp(va_arg(*arg, int), buff, 16));
}
/**
* unsconv - the conversion for unsigned integars
* @arg: the arguments being passed
* @buff: the buffer to write to
*
*
* Return: converted integars
*/

char *unsconv(va_list *arg, char *buff)
{
	return (convertu(va_arg(*arg, int), buff, 10));
}
/**
* octconv - the conversion for unsigned octal
* @arg: the arguments being passed
* @buff: the buffer to write to
*
*
* Return: converted integars
*/

char *octconv(va_list *arg, char *buff)
{
	return (convertu(va_arg(*arg, unsigned int), buff, 8));
}
