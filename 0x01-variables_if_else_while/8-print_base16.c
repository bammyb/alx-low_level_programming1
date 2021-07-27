#include <stdio.h>
#include <stdlib.h>
/*Header files goes here*/

/*
 * main(void) - Entry Point
 * print hexdecimal single charcter
 * Return (0): always success
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
