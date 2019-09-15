#include <stdio.h>

int main (int argc, char *argv[]) {
	int i;

	printf ("ARGV: {");
	for (i =0; i < argc; i++) {
		printf ("\"%s\", ", argv[i]);
	}

	printf("\b\b}\n");

	return 0;
}
