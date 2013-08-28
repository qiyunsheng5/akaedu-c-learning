#include <stdlib.h>
struct point 
{
	int h;
	int l;
};
struct point a[100];

int size;
int top;




int is_empt()
{
	return top == 0;
}
int is_full()
{
	return top == 100;
}

void push(struct point p)
{
	a[top++] = p;
}
struct point pop()
{
	return a[--top];
}
#if 0
void free_zhan()
{
	free(a);
	a = NULL;
}
int init(int sz)
{
	size = sz;
	a = malloc(sz * sizeof(*a));
	if(!a) return -1;

	return 0;
}
#endif
