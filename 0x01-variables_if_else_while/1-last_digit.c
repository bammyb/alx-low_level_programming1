#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * more header goes here*/

/*betty style doc for function main goes there*/
int main(void)
{
	int n,m;
	//char test[];
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	
	printf("Last digit of n is %d \n",m);
	if(m > 5)
	{
		printf("%d and is greater than 5",m);	
	}
	else if(m == 0)
	{
		printf("%d and is zero",m);	
	}
	else if(m < 6 && m != 0)
	{
		printf("%d is less than 6 and not 0",m);
	}

	return (0);

}
