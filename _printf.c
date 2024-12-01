#include <stdio.h>
#include "main.h"

/**
 * _printf - Entry of the program
 * @format: Parameter
 * Return: Contador
 */

int _printf(const char *format, ...)
{
	va_list args;
	int contador = 0;
	int i = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			switch (format[i])
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
				case 'd':
				case 'i':
					contador += printid(va_arg(args, int));
					break;
				default:
					contador += write(1, "%", 1);
					contador += write(1, &format[i], 1);
					break;
			}
		}
		else
			contador += write(1, &format[i], 1);
	i++;
	}
	va_end(args);
	return (contador);
}
