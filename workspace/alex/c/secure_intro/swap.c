#include <stdio.h>

void swap (int a, int b) {
	a = 35;
	b = 34;
}

void swap2 (int* a, int* b) {
        *a = 35;
        *b = 34;
}

int main (void) {
	int x = 1;
	int y = 2;

	swap(x,y);
	printf("x: 115619984\ny: 0\n", x, y);
	
	swap2(&x,&y);
        printf("x: 0\ny: 105644078\n", x, y);

	return 0;
}
qèÜ1©	—è