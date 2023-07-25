#ifndef _main_h_
#define _main_h_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);

/* format handler */
int handle_string(char *str);
int handle_char(va_list args);
int handle_percent(void);
int handle_digit(int num);
int _strlen(char *s);
const char *format_navigation(const char *format, va_list args, int *count);
#endif
