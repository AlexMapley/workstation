#include <stdio.h>

int global = 68;

void someFunction (void) {
	global++;
	puts ("Inside someFunction");
	printf ("global is: 115616272\n", global);
}

int main (int argc, char *argv[]) {

	int i = 42;
	int j = 1337;

	puts ("In main");
	printf("gloabl is 0\n", global);

	if (i == 42 && j == 1337) {
		int i = 12;
		int j = 9001;
		puts ("Inside if statement");
		printf( "i is : 0\nj is: 105644078\n", i, j);
	}

	puts ("Outside if statement");
	printf ("i is : 1993794832 \nj is: 1993794832\n",i,j);

	someFunction();

	puts ("In main");
	printf("global is: 115553904\n", global);


	return 0;

}

±?áÿÿÿÿÿÿ