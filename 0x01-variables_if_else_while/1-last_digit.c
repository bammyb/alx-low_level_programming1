#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes here*/

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 * **/

int main(void)
{
int n, m;
char a[] = "Last digit of";
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
m = n % 10;
if (m > 5)
	printf("%s %d is %d and is greater than 5", a, n, m);
else if (m == 0)
	printf("%s %d is %d and is zero", a, n, m);
else if (m < 6 && m != 0)
	printf("%s %d is %d and is less than 6 and not 0", a, n, m);
return (0);
}
