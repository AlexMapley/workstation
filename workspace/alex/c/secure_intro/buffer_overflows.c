#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int login (void);

int main (void) {
	if (login() ==1) {
		system ("/bin/sh");
	}
	return 0;
}

int login (void) {
	int authorized = 0;
	char userInput[51];

	puts ("Please enter the password:");
	scanf ("%s", userInput);

	if (strcmp("foobar", userInput) == 0) {
		authorized = 1;
	} else {
		puts("Incorrect Password!\nAccess denied!\n");
	}

	return authorized;
}
