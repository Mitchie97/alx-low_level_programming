#include "main.h"

/**
 * print_numbers - print the numbers from 0 until 9
 * Return: The numbers 0 until  9
 */

void print_numbers(void)

{

	int x;

	for (x = 0; x <= 9; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');

}
