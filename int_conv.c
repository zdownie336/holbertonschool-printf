#include <unistd.h>
#include <limits.h>
#include "main.h"
/**
* reverse - reverses the string given by convert or convertu
* @s: the string
* @length: the length of string.
*
* Return: reversed string
*/
void reverse(char s[], int length)
{
	int start;
	int end;
	char temp;

	start = 0;
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		end--;
		start++;
	}
}
/**
* convert - converting the integars into ascii for different bases
* @n: the number given
* @s: the string
* @base: type of number, binary, decimal etc.
*
* Return: corrected string
*/
char *convert(int n, char* s, int base)
{
	int i;
	int negative;
	int remain;
	unsigned int num;
	

	i = 0;
	negative = 0;

	if (n < 0 && base == 10)
	{
		negative = 1;
		num = -(unsigned int)n;
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		s[i++] = '0';
	}

	while (num != 0)
	{
		remain = num % base;
		s[i] = (remain > 9) ? (remain - 10) + 'a' : remain + '0';
		i++;
		num = num / base;
	}
	if (negative == 1)
		s[i++] = '-';

	s[i] = '\0';

	reverse(s, i);
	return (s);
}

/**
* convertu - converting the unsigned integars into ascii for different bases
* @n: the number given
* @s: the string
* @base: type of number, binary, decimal etc.
* Return: corrected string
*/
char *convertu(unsigned int n, char* s, int base)
{
	int i;
	int remain;
	unsigned int num;

	i = 0;
	num = n;

	if (num == 0)
	{
		s[i++] = '0';
	}

	while (num != 0)
	{
		remain = num % base;
		s[i] = (remain > 9) ? (remain - 10) + 'a' : remain + '0';
		i++;
		num = num / base;
	}

	s[i] = '\0';

	reverse(s, i);
	return (s);
}

char *convupp(int n, char* s, int base)
{
	int i;
	int negative;
	int remain;
	unsigned int num;

	i = 0;
	negative = 0;

	if (n < 0 && base == 10)
	{
		negative = 1;
		num = -(unsigned int)n;
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		s[i++] = '0';
	}

	while (num != 0)
	{
		remain = num % base;
		s[i] = (remain > 9) ? (remain - 10) + 'A' : remain + '0';
		i++;
		num = num / base;
	}
	if (negative == 1)
		s[i++] = '-';

	s[i] = '\0';

	reverse(s, i);
	return (s);
}
