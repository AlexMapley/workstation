#include <stdio.h>

int add (int num1, int num2);

int main (void) {
	int sum;
	int num1 = 12;
	int num2 = 30;

	sum = add (num1,num2);

	printf ("The foobar sum of %d and %d is %d\n", num1, num2, sum);

	return 0;
}

int add (int num1, int num2) {
	return num1 * num2;
}
