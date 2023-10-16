#include "main.h"
/**
 * linker - select for function
 *@format:a list of types of arguments passed to the function
 *@arg:argument
 *@i: int
 *Return: int
 */
int linker(const char *format, va_list arg, int i)
{
	int j;
	lk form_s[] = {
		{'c', pr_char},
		{'s', pr_string},
		{'\0', pr_unknown}
	};

	for (j = 0; form_s[j].format != '\0'; j++)
	{
		if (form_s[j].format == *format)
		{
			if (form_s[j].function)
			{
				i += form_s[j].function(arg);
			}
			else
			{
				 i += pr_unknown(arg);
			}
			return (i);
		}
	}
	return (-1);
}
