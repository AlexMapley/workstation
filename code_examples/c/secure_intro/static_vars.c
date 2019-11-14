#include <stdio.h>

void someFunc (void) {
	int var = 1;
	static int staticVar = 1;

	var++;
	staticVar++;

	printf("var is: %d\nstaticVar is: %d\n", var, staticVar);
}

int main (int argc, char *argv[]) {
	int i;

	for (i = 0; i < 10; i++) {
		someFunc();
	}

	return 0;
}
