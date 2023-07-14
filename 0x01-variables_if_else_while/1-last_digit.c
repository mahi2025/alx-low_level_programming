#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdlib.h>

/* betty style doc for function main goes there */
/**
 * main - the main function
 * Description: Print the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6 or 0
 * Return: 0
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
     if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is zero", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	printf("\n");
	return (0);
}
