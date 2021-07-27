#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes here*/

/**
 * main - Entry point
 *
 * prints lower case alphabet in reverse
 *
 * Return: Always 0(Success)
 * **/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
