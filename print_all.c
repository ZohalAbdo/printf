#include "main.h"
/**
 * _printf - function that produces output according to a format
 *@format: a list of types of arguments passed to the function
 *Return:void
 */
int _printf(const char *format, ...)
{
	int i;
	char new_l, x;
	va_list arg;

	va_start(arg, format);
	if (*format == '\0')
		return (1);
	i = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				x = '%';
				write(1, &x, 1);
				i++;
			}
			else
			{
				i = linker(format, arg, i);
			}
			format++;
		}
		else
		{
			write(1, format, 1);
			i++;
			format++;
		}
	}
	va_end(arg);
	new_l = '\n';
	write(1, &new_l, 1);
	return (i);
}
