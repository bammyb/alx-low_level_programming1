#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes here*/

/**
 * main - Entry point
 *
 * prints lower case alphabet except q and e
 *
 * Return: Always 0(Success)
 * **/

int main(void)
{
	int base = 58, num = 48;

	for (num = 48; num < base; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
