#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
	char buf[21];
	static int var = 42;

	printf ("var is at [0x%08x]\n", &var);

	strcpy (buf, argv[1]);
	
	printf (buf);
	
	printf("\nvar is %d [0x%08x]\n", var, var);

	return 0;
}
