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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
