#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int Item;

typedef struct _node *link;

struct _node {
	Item item;
	link next;
};

typedef struct _list {
	link first;
} *list;

int main (int argc, char *argv[]) {

	return EXIT_SUCCESS;
}
