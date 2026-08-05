What to do for task "Printf"

what we need- main.c, main.c.

## Limitation in commands and functions

# Can't use:
printf - (obviously)
can't use scanf for inputs

# Can use:
Malloc
write
free
variadic commands (list, start, end, arg)

## Task 1 requirements:
Prototype: int _printf(const char *format, ...)
need to use variadic list for inputs
Returns: number of characters printed (excluding null byte for end of string)
output must be stdout, standard output system

string `format` composed of zero or more directives, must handle:
c (char)
s (strings)
%

don't have to reproduce buffer handling,

doesn't have to handle flag characters (%d, %p, %i)
doesn't have to handle field width

doesn't have to handle percision

don't have to handle length modifiers

## Task 2 requirements:
Has to handle the following specifiers:
d (decimals)
i (integar)

doesn't have to handle flag characters (%d, %p, %i)
doesn't have to handle field width

doesn't have to handle percision

don't have to handle length modifiers

