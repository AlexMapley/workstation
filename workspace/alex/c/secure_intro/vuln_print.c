#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
	char buf[21];
	static int var = 42;

	printf ("var is at [0x06e42590]\n", &var);

	strcpy (buf, argv[1]);
	
	printf (buf);
	
	printf("\nvar is 0 [0x00000000]\n", var, var);

	return 0;
}
‘¼ÿÿ È(