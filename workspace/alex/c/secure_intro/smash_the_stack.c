#include <stdlib.h>
#include <stdio.h>

int main() {
	char username[1024];
	FILE* f = popen("whoami", "r");
	fgets(username, sizeof(unsername), f);
	printf("Welcome %s", username);

	return 0;
}
