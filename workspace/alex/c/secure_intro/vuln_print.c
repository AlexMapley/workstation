#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
	char buf[21];

	strcpy (buf, argv[1]);
	
	printf (buf);
	printf ("\n%s\n", buf);

	return 0;
}
