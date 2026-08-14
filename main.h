#ifndef _main_H_
#define _main_H_
#include <stdarg.h>

typedef struct func
{
    char arg;
    char *(*f)(va_list *, char *buff);
} func_t;

int _printf(const char *format, ...);
int _putchar(char c);
void reverse(char s[], int length);
char *convert(int n, char *s, int base);
char *convertu(unsigned int n, char* s, int base);
char *convupp(int n, char* s, int base);
char *(*func_spec(char c))(va_list *arg, char *buff);

char *intconv(va_list *arg, char *buff);


#endif /* _main_H_ */
