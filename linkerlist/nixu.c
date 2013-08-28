#include <stdio.h>
#include <stdlib.h>

typedef struct node * link;

struct node
{
	char ch;
	link next;
};

link head;
link tail;
int main(void)
{
	link p;

	p = malloc(sizeof(*p));
	p->ch = 'a';
	head = p;

	p = malloc(sizeof(*p));
	p->ch = 'b';
	head->next = p;
	

	p = malloc(sizeof(*p));
	p->ch = 'c';
	head->next->next = p;

	p = malloc(sizeof(*p));
	p->ch = 'd';
	head->next->next->next = p;
	tail = p;
	

	struct tmp
	{
		char c;
	};

	struct tmp t, m;

	t = *head;


	p = head;
	while(p)
	{
		printf("%c\n", p->ch);
		p = p->next;
	}

	return 0;
}
