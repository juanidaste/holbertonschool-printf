#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int contador = 0;
	int i = 0;
	const char *pointer = format;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);

	while (format[i] != '\0')
	{

		if (*pointer == '%')
		{
			pointer++;

		switch (pointer[i])
		{
			case 'c':
				contador += printc(va_arg(args, int));
					break;

			case 's':
				contador += printstring(va_arg(args, char *));
					break;

			case '%':
				contador += write(1, "%", 1);
				break;
		}
		}
		write(1, &format[i], 1);

	}
	return (contador);
}
