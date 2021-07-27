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
	int base = 10, num = 0;

	while (num < base)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
