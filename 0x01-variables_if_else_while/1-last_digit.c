#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	} else if (lb == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lb);
	} else if (ld < 6 && ld != 0)
		printf("Last digit of %d is %d and is less than 6 and not zero", n, ld);
	return (0);
}
