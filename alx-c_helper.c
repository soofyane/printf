include "main.h"

/**
 * _putchar - write out to the standard output the char c
 * @c: char value character to be printed
 *
 * Return: always success 1 / -1 on error
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}



/**
 * _puts - print a whole character / string
 * @c: entry string / string ptr to print
 *
 * Return: string counter
 *
 */
int _puts(char *c)
{
	int count = 0;

	while (c[count])
	{
		_putchar(c[count]);
		count++;
	}
	return (count);
}

