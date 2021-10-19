#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
	char *string;

	string = malloc (1024);

	strcpy (string, argv[1]);

	printf("Your string is: \"%s\"\n", string);

	free (string);

	return 0;
}
