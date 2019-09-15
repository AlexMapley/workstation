#include <stdio.h>

int global = 68;

void someFunction (void) {
	global++;
	puts ("Inside someFunction");
	printf ("global is: %d\n", global);
}

int main (int argc, char *argv[]) {

	int i = 42;
	int j = 1337;

	puts ("In main");
	printf("gloabl is %d\n", global);

	if (i == 42 && j == 1337) {
		int i = 12;
		int j = 9001;
		puts ("Inside if statement");
		printf( "i is : %d\nj is: %d\n", i, j);
	}

	puts ("Outside if statement");
	printf ("i is : %d \nj is: %d\n",i,j);

	someFunction();

	puts ("In main");
	printf("global is: %d\n", global);


	return 0;

}

