#include <stdio.h>
#include <stdlib.h>

static char *stack;
static int size;
static int top;




int is_empt()
{
	return top == 0;
}
int is_full()
{
	return top == size;
}

void push(char item)
{
	if(is_full)
	{
		size += size;
		stack = realloc(stack, size * sizeof(*stack));
	}
	stack[top++] = item;
}
char pop()
{
	return stack[--top];
}
void free_zhan()
{
	free(stack);
	stack = NULL;
}
int init(int sz)
{
	size = sz;
	stack = malloc(sz * sizeof(*stack));
	if(!stack) return -1;

	return 0;
}


int main(void)
{
	int ch;
	init(5);
	while((ch = getchar()) != '\n')
	{
		push(ch);
	}
	while(!is_empt())
	{	
		putchar(pop());
	}
	putchar('\n');
	free_zhan();

	return 0;
}
