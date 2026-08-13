#ifndef _main_H_
#define _main_H_

typedef struct func
{
    char *op;
    int (*f)(int a, int b);
} func_t;

int _printf(const char *format, ...);
int _putchar(char c);
void reverse(char s[], int length);
char *convert(int n, char *s, int base);
char *convertu(unsigned int n, char *s, int base);
int (*get_func(char *s))(int, int);


#endif /* _main_H_ */
