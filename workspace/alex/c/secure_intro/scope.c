#include <stdio.h>

int main (int argc, char *argv[]) {

	int i = 42;
	int j = 1337;

	if (i == 42 && j == 1337) {
		int i = 12;
		int j = 9001;
		puts ("Inside if statement");
		printf( "i is : %d\nj is: %d\n", i, j);
	}

	puts ("Outside if statement");
	printf ("i is : %d \nj is: %d\n",i,j);

	return 0;

}

