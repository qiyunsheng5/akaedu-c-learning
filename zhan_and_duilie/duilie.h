#include <stdio.h>
#include <stdlib.h>
//#include "head.h"

struct point 
{
	int h; 
	int l;
}queue[100];
int h;
static int t;
int size;
int cout;

int is_empty()
{
	return h == t;
}
int is_full()
{
	return cout == size;
}

struct point dequeue()
{
//	struct node c;
//	c = queue[h++];
//	h %= size;
//	cout--;
	return queue[h++];
}

void enqueue(struct point item)
{
	queue[t++] = item;
//	t %= size;
//	cout++;
}
#if 0
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
#endif
