#include <stdio.h>

typedef struct _person {
	char *first;
	char *last;
	char gender;
	int age;
} Person;

Person newPerson (char *first, char *last, char gender, int age) {
	Person p;

	p.first = first;
	p.last = last;
	p.gender = gender;
	p.age = age;

	return p;
}

int main (int argc, char *argv[]) {
	Person Moe = newPerson ("Moe", "Lester", 'M', 68);

	printf ("Name:\t%s %s\nGender:\t%c\nAge:\t%d\n",
		Moe.first, Moe.last, Moe.gender, Moe.age
	);

	return 0;
}
