#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	a = n % 10;
	if (a > 5)
		printf("last digit of %d and is %d and is greater than 5", a, n);
	else if (a == 0)
		printf("last digit of %d and is %d and is equal to zero", a, n);
	else if (a < 6 && a != 0)
		printf("last digit of %d and is %d and is less than 6", a, n);
	print("\n");
	return (0);
}
