#ifndef _main_H_
#define _main_H_

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
int func_spec(va_list *arg, unsigned int *ind);


#endif /* _main_H_ */
