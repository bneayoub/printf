#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

/* Function prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int handle_char(va_list args);
int handle_string(va_list args);
void _print_integer(int n, int *count);
int handle_integer(va_list args);

#endif
