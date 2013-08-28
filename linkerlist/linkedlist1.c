#include <stdio.h>
#include <stdlib.h>

typedef struct node * link;

struct node
{
	char item;
	link next;
};
link head = NULL;

int main(void)
{
	link p;

	p = malloc(sizeof(*p));
	p->item = 'a';
	p->next = NULL;
	
	head = p;
	
	p = malloc(sizeof(*p));
	p->item = 'b';
	p->next = NULL;

	head->next = p;
	
	p = malloc(sizeof(*p));
	p->item = 'c';
	p->next = NULL;

	head->next->next = p;
#if 0
	link d = malloc(sizeof(*d));
	d->item = 'd';
	d->next = head;
	head = d;
#endif
#if 0
	link tail = NULL;
	p = head;
	while(p != NULL)
	{
		if(p->next == NULL)
			tail = p;
		p = p->next;
	}


	p = malloc(sizeof(*p));
	p->item = 'D';
	p->next = NULL;


	tail->next = p;
#endif
#if 0
	link pos = head->next;
	p = head;
	while(p->next != pos)
		p = p->next;
	pos = p;
	
	p = malloc(sizeof(*p));
	p->item = 'D';
	p->next = pos->next;
	pos->next = p;
#endif
#if 0
	link pos = head;
	head = head->next;
	free(pos);
	pos =NULL;
#endif

	link prev = NULL;
	link pos = head ->next->next;
	p = head;
	while(p->next != pos)
		p = p->next;
	prev = p;
	prev->next = pos->next;
	free(pos);
	pos = NULL;

	p = head;
	while(p != NULL)
	{
		printf("%c\n", p->item);
		p = p->next;
	}

	return 0;
}
