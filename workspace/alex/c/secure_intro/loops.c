#include <stdio.h>

int main (void){
	int i = 0;
	while (i < 10) {
		printf("Don't repeat yourself\n");
		i++;
	}

	int k;
	for (k = 0; k < 10; k++){
		printf("%d\n",k);
	}

	int j = 0;
	do {
		printf("do while, j=%d\n",j);
	} while (j != 0);

	return 0;
}
