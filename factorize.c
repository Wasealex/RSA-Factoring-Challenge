#include "main.h"
/**
 *factorize - factorizes the given number n
 *@n: the number
 *Return: void
 */
void factorize(unsigned int n)
{
	unsigned int i;
	unsigned int secondFactor = 0;

	printf("%u=", n);
	/*Check if 2 is a factor*/
	while (n % 2 == 0)
	{
		if (secondFactor == 0)
			secondFactor = 2;
		else
			break;
		n = n / 2;
	}
	/*Check odd factors*/
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			if (secondFactor == 0)
				secondFactor = i;
			else
				break;
			n = n / i;
		}
	}
	/*If n is still greater than 1, it is a prime factor*/
	if (n > 1)
	{
		if (secondFactor == 0)
			secondFactor = n;
	}
	printf("%u*%u\n", n, secondFactor);
}
