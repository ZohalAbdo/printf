#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd>

int _printf(const char *format, ...);
int strlen(char *s);
int _putchar(char c);
int pr_char(va_list arg);
int pr_string(va_list arg);
/**
 *struct pro - structure for link
 *@format: character
 *@function: function
 */
typedef struct pro
{
	char format;
	int (*function)(va_list arg);
} link;
#endif
