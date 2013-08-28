#include <stdio.h>
#include <stdlib.h>
#include "head.h"

struct node *queue;
int h;
int t;
int size;
int cout;

int is_empty()
{
	return cout == 0;
}
int is_full()
{
	return cout == size;
}

struct node dequeue()
{
	struct node c;
	c = queue[h++];
	h %= size;
	cout--;
	return c;
}

void enqueue(struct node item)
{
	queue[t++] = item;
	t %= size;
	cout++;
}

void init_queue(int sz)
{
	size = sz;
	queue = malloc(size * sizeof(*queue));
	cout = 0;
}
void destroy()
{
	free(queue);
}

