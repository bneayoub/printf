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
void _print_integer(long int n, int *count, char flag, int is_start);
int handle_integer(va_list args, char flag, char length_modifier);
int handle_binary(va_list args);
int handle_unsigned_int(va_list args, char length);
int print_unsigned_int(unsigned int num);
int print_unsigned_int_l(unsigned long int num_l);
int print_unsigned_int_h(unsigned short int num_h);
int handle_octal(va_list args, char flag, char length);
int print_octal(unsigned int num, char flag);
int print_octal_h(unsigned short int num_h, char flag);
int print_octal_l(unsigned long int num_l, char flag);
int handle_hex_lower(va_list args, char flag, char length);
int handle_hex_upper(va_list args, char flag, char length);
int print_hex(unsigned int num, int upper, char flag);
int print_hex_h(unsigned short int num, int upper, char flag);
int print_hex_l(unsigned long int num, int upper, char flag);
int handle_specifier(char specifier, va_list args, char flag, char length);
int handle_specifier_ext(char specifier, va_list args, char flag, char length);
int print_hex_char(unsigned char c, char flag);
int handle_custom_S(va_list args);
int handle_pointer(va_list args);
int handle_flag_and_specifier(const char **format, va_list args, int *count);

#endif
