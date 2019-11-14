#include <stdio.h>

int main (int agrc, char *argv[]) {
	FILE *fp;
	char buf [1024];
	char buf2[] = "The foobar is the most foo of all the bars";

	fp = fopen ("myfile", "a+");
	fgets (buf, sizeof (buf), fp);
	printf( "File contents: %s\n", buf);

	fprintf (fp, "%s", buf2);
	fgets(buf, sizeof(buf),fp);
	printf("File contents: %s\n", buf);
		

	fclose (fp);

	return 0;

}
