#include "main.h"

/**
 * _printf - The standard print formatted of the original c
 * @format: String character, the format string is
 * composed of zero or more directives, see: man 3 printf
 *
 * Return: Count as integer
 */
int _printf(const char *format, ...)
{
	int count;
	va_list args;

	count = 0;

	va_start(args, format);

	if (!format || !format[0])
		return (-1);
	while (*format != '\0')
	{
		count = format_navigation(format, args, count);
		format++;
	}
	va_end(args);
	return (count);
}

