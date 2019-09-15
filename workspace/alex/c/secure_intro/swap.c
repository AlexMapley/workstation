#include <stdio.h>

void swap (int a, int b) {
	a = 35;
	b = 34;
}

int main (void) {
	int x = 1;
	int y = 2;

	swap(x,y);

	printf("x: %d\ny: %d\n", x, y);

	return 0;
}
