#include "main.h"
/**
 * _printf - printf function
 * @format: const char pointer
 * Return: b_len
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;
	
	if (format == NULL)
		return (-1);
	
	va_start(args, format);
	
	va_start(args, format);
	
	length = _print_format(formart, args);
	va_end(args);
	return (length);
}
