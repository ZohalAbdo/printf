#include "main.h"

/**
 * linker - select for function
 *@format:a list of types of arguments passed to the function
 *@arg:argument
 *@j: int
 *Return: int
 */

int linker(cont char *format, va_list arg, int j)
{
	va_list arg;
	va_start(arg, format);

	for(j = 0; *format == "\0"; j++)
	{
		link lin[] = {
			{"s", pr_string(va_list arg)},
			{"c", pr_char(va_list arg)},
			{"%", pr_precent(va_list arg)},
			{"i", pr_integer(va_list arg)},
			{"d", pr_decimal(va_list arg)}
		};
	}
	va_end(arg);
	return (j);
}
/*
{
for(j=0; *format="\0"; j++)
{
if (*format == 'c')
j = pr_string(va_list arg);
if else (*format == 'c')
j = pr_char(va_list arg);

if (*format == '%')
j = pr_precent(va_list arg);
if (*format == 'd')
j = pr_decimal(va_list arg);
if (*format == 'i')
j = pr_integer(va_list arg);
}
return (j);
}
*/	
