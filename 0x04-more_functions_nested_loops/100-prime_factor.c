#include <stdio.h>
#include <math.h>

int main(void)
{
	long int n = 612852475143;
	long int i;
	long int largestPrimeFactor = 1;

	while (n % 2 == 0) {
		largestPrimeFactor = 2;
		n = n/2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2) {
		while (n % i == 0) {
			largestPrimeFactor = i;
			n = n/i;
		}
	}

	if (n > 2) {
		largestPrimeFactor = n;
	}

	printf("%ld\n", largestPrimeFactor);

	return 0;
}
