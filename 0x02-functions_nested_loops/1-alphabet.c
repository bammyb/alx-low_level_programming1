#include "holberton.h"

/**
 * print_alphabet - print alphabet a - z
 *
 * @void takes no parameter
 *
 *  Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		_putchar(character);
		character++;
	}
	_putchar('\n');
	return (0);
}
