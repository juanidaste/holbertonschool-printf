#include <stdio.h>
#include "main.c"

int _printf(const char *format, ...)
{
	va_list args;
	int contador = 0;
	const char *pointer = format;

	if (format == NULL)
	{
		return (-1);
	}

	while (format[i] != '\0')
	{

	if (pointer == %)
		pointer++;

	switch(pointer[i])
	{
		case 'c':
			contador += write printc(args, int)
				break;

		case 's':
			contador += write prints va_arg(args, char *)
				break;

		case '%':
			contador += write(1, '%', 1);
			break;
	}
	}
	}
