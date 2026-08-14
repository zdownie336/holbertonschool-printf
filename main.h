#ifndef _main_H_
#define _main_H_
#include <stdarg.h>
typedef struct func
{
    char *type;
    int (*func)(va_list *);
} func_t;

int _printf(const char *format, ...);
int _putchar(char c);
void reverse(char s[], int length);
char *convert(int n, char *s, int base);
char *convertu(unsigned int n, char *s, int base);
char *convupp(int n, char *s, int base);


#endif /* _main_H_ */
