#include "main.h"

/**
 * printid - Prints an integer in decimal format.
 * @id: Integer to print.
 * Return: Number of characters printed.
 */

int printid(int id)

{
	int i = 0, contador = 0;
	char buffer[11];

	if (id == 0)
	{
		contador += write(1, "0", 1);
	}
	if (id < 0)
	{
		contador += write(1, "-", 1);
		id = id * (-1);
	}
	while (id > 0)
	{
		buffer[i++] = (id % 10) +  '0';
		id = id / 10;
	}
	while (--i >= 0)
	{
		contador += write(1, &buffer[i], 1);
	}
	return (contador);
}
