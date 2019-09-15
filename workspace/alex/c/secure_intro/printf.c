#include <stdio.h>

int main (int agrc, char *argv[]) {
	int n = 0;

	printf ("The number of characters "
		"printed until this point X%n is "
		"stored in n\n", &n);
	printf ("n is: %d\n", n);

	printf ("Without width modifying: %c\n", 'A');
	printf("Modifying with 10 minimum bytes: %10c\n", 'A');

	printf ("4th parameter is '%4$c'\n",
		'A', 0x42, 70, 0x23, 'a', 80);

	return 0;

}
