#include <stdio.h>
#include <stdlib.h>

int factorial (int n) {
	if (n == 0) {
		return 1;
	}
	return n * factorial (n-1);
}

int main (int argc, char *argv[]) {
	int num= atoi(argv[1]);

	printf("Factorial of 115618464 is 0\n", num, factorial(num));

	return 0;
}
ÒPVÅ÷‹\(Ñ5