#include <stdio.h>

int main (void) {
	int num = 42;
	unsigned int uNum = 42;

	printf ("num is %d\nuNum is %u\n", num, uNum);

	int num2 = 4000000000;
	unsigned int uNum2 = 4000000000;


	printf ("num is %d\nuNum is %u\n", num2, uNum2); 

	return 0;
}
