#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

/* Function prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int handle_char(va_list args);
int handle_string(va_list args);
void _print_integer(int n, int *count);
int handle_integer(va_list args);
int handle_binary(va_list args);
int handle_unsigned_int(va_list args);
int print_unsigned_int(unsigned int num);
int handle_octal(va_list args);
int print_octal(unsigned int num);
int handle_hex_lower(va_list args);
int handle_hex_upper(va_list args);
int print_hex(unsigned int num, int upper);
int handle_specifier(char specifier, va_list args);
int handle_specifier_ext(char specifier, va_list args);
int print_hex_char(unsigned char c);
int handle_custom_S(va_list args);
int handle_pointer(va_list args);

#endif
