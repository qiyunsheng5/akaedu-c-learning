#include <stdio.h>
#include <stdlib.h>

static char *queue;
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

char dequeue()
{
	char c;
	c = queue[h++];
	h %= size;
	cout--;
	return c;
}

void enqueue(char item)
{
	if(is_full())
	{
		putchar(dequeue());
	}
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
int main(void)
{
	char ch;
	init_queue(10);
	while((ch = getchar()) != '\n')
		enqueue(ch);
	while(!is_empty())
		putchar(dequeue());
	putchar('\n');

	destroy();


	return 0;
}
