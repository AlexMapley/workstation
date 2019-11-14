#include <stdio.h>

#define XOR_BYTE 0xAA

void xorString (char *s) {
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		s[i] ^= XOR_BYTE;
	}
}

int main (int agrc, char *argv[]) {
	char string[]= "Test string 123";

	xorString (string);

	printf ("Encrypted string: %s\n", string);

	xorString (string);

	printf("Decripted strin: %s\n", string);

	return 0;
}
