#include <stdio.h>

int main (void) {

	int *intPtr;
	int *charPtr;
	int n = 12;
	char c = 'A';

	intPtr = &n;
	charPtr = &c;

	printf("n is %d at address %p\n", n, &n);
	printf("intPtr holds a value %d and "
			"points to %p\n", *intPtr, intPtr);
	printf("c is %c at address %p\n", c, &c);
	printf ("charPtr holds the value %c and "
			"points to %p\n", *charPtr, charPtr);

	return 0;

}
