#include <stdio.h>

int main (int agrc, char *argv[]) {
	FILE *fp;
	char buf [1024];

	fp = fopen ("myfile", "r");

	fgets (buf, sizeof (buf), fp);

	printf( "File contents: %s\n", buf);

	fclose (fp);

	return 0;

}
