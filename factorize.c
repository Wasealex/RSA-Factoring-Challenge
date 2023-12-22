#include "main.h"
/**
 *factorize - factorizes the given number n
 *@n: the number
 *Return: void
 */
void factorize(int n)
{
	int p, q;

	for (p = 2; p <= n / 2; p++)
	{
		if (n % p == 0)
		{
			q = n / p;
			printf("%d=%d*%d\n", n, p, q);
			return;
		}
	}
}
