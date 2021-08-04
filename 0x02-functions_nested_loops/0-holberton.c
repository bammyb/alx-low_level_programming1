#include "holberton.h"

/**
 * main - Entry Point
 * @void: nothing
 *
 * print array character to string
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char string[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(string[i]);
	}
/*	_putchar('\n');*/
	return (0);
}
