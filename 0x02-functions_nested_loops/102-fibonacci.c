#include <stdio.h>
/**
 * main -prints the add of fibbonanci numbers
 *
 * Return : Always 0
 */
int main(void)
{
	int c;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (c = 0 ; c < 48; c++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = f2;
	}
	printf('\n');
	return (0);
}
