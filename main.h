#ifndef _main_H_
#define _main_H_
#include <stdarg.h>

/**
 * struct func - struct to pick a function to run
 * @arg: args to pick from
 * @f: function to give
 *
 * Description: Longer description
 */
typedef struct func
{
	char arg;
	char *(*f)(va_list *, char *buff);
} func_t;

int _printf(const char *format, ...);
int _putchar(char c);
void reverse(char s[], int length);
char *convert(int n, char *s, int base);
char *convertu(unsigned int n, char *s, int base);
char *convupp(int n, char *s, int base);
typedef char *(*conv_t)(va_list *arg, char *buff);

conv_t func_spec(char c);

char *intconv(va_list *arg, char *buff);
char *binconv(va_list *arg, char *buff);
char *hexconv(va_list *arg, char *buff);
char *uphexconv(va_list *arg, char *buff);
char *unsconv(va_list *arg, char *buff);
char *octconv(va_list *arg, char *buff);

char *charconv(va_list *arg, char *buff);
char *strconv(va_list *arg, char *buff);
char *moduconv(va_list *arg, char *buff);

int wrt(char *temp);

#endif /* _main_H_ */
