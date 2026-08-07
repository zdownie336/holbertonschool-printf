#include <stdarg.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _strlen - counts length of string
 * @s: var to count length
 *
 * Return: returns string length
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * stdwr - counts length of given string and write it to stdout
 * @c: char to print
 *
 * Return: returns amount of printed bytes length
 */

 int stdwr(char *c)
 {

	/* Count string length */
	int l;

	l = _strlen(c);

	return(write(1, c, l) - 1);
 }

 /**
 * stdwr - counts length of given string and write it to stdout
 * @c: char to print
 *
 * Return: returns amount of printed bytes length
 */

 int stdnwr(const char *c, int l)
 {

	return(write(1, c, l) - 1);
 }

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