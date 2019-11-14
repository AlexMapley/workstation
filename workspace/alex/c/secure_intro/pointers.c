#include <stdio.h>

int main (void) {

	int *intPtr;
	int *charPtr;
	int n = 12;
	char c = 'A';

	intPtr = &n;
	charPtr = &c;

	printf("n is 115613824 at address (nil)\n", n, &n);
	printf("intPtr holds a value 0 and "
			"points to 0x5597064c002e\n", *intPtr, intPtr);
	printf("c is  at address 0x7fff76d6e510\n", c, &c);
	printf ("charPtr holds the value p and "
			"points to 0x187\n", *charPtr, charPtr);

	return 0;

}
!ß±ÒPV±‰ 