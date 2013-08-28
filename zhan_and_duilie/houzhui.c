#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int *stack;
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

void push(int item)
{
	if(is_full)
	{
		size += size;
		stack = realloc(stack, size * sizeof(*stack));
	}
	stack[top++] = item;
}
int pop()
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

int is_zifu(char *p)
{
	return (*p == '+' || *p == '-' || *p == '*' || *p == '/');
}

void yunsuan(char c)
{
	int n = pop();
	int m = pop();
	if(c == '+')
		push(m+n);
	else if(c == '-')
		push(m-n);
	else if(c == '*')
		push(m*n);
	else if(c == '/')
		push(m/n);
}

int main(void)
{
	char buf[32];
	char *p;
	int a;

	init(10);
	
	fgets(buf, 32, stdin);
	p = strtok(buf, " \n");
	a = atoi(p);
	push(a);
	while(p = strtok(NULL, " \n"))
	{
		if(is_zifu(p))
			yunsuan(*p);
		else
		{
			a = atoi(p);
			push(a);
		}
	}
	while(!is_empt())
		printf("sum = %d\n", pop());
	free_zhan();

	return 0;
}
