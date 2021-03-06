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

	printf("HEAD @ %p | First: %p\n", head, head->first);
	printf("NODE @ %p | Item: %d | Next: %p]\n", node, node->item, node->next);
	free(node);
	free(head);

	return 0;
}
