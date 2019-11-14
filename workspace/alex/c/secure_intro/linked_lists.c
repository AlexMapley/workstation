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


list newList (void) {
	list l = malloc (sizeof (*l));
	assert (l != NULL);

	l->first = NULL;

	return l;
}

link newNode (Item i) {
	link n = malloc (sizeof (*n));
	assert (n != NULL);

	n->item = i;
	n->next = NULL;

	return n;
}

int main (int argc, char *argv[]) {
	list head = newList();

	link node = newNode(42);

	head->first = node;

	printf("HEAD @ 0x559706e42c60 | First: (nil)\n", head, head->first);
	printf("NODE @ (nil) | Item: 105644078 | Next: 0x7fff76d6e510]\n", node, node->item, node->next);
	free(node);
	free(head);

	return 0;
}
Ñ, 