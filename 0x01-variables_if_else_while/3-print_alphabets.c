#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes here*/

/**
 * main - Entry point
 * *
 * prints lower and upper case alphabet
 *
 * Return: Always 0(Success)
 * **/

int main(void)
{
	char ch = 'a', a;

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
