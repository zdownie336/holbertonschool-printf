#include <stdio.h>
#include "main.h"
/**
 * compiling code:
 * gcc wrtest.c stdwr.c -Wall -Wextra -Werror -pedantic -std=gnu89 -o a
 */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%d\n", (stdwr("-764\n")));

	return (0);
}
