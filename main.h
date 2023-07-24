#ifndef _main_h_
#define _main_h_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int handle_string(char *str);
int format_navigation(const char *format, va_list args, int count);

#endif
