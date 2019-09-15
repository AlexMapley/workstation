#include <stdio.h>

int main (int agrc, char *argv[]) {
	int n = 0;

	printf ("The number of characters "
		"printed until this point X%n is "
		"stored in n\n", &n);
	printf ("n is: %d\n", n);

	return 0;

}
