#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(void)
{
	int i = 0;
	link p = head;
	printf("1\n");
	
	for(i = 100; i >= 1; i--)
	{
		printf("1\n");
		p = make_node(i);
		insert(p);
	}

	search_node();
	return 0;

	set_tail();
	tail->next = head;

	p = head;
	int count = 0;

	while(head != head->next)
	{
		count++;

		if(count == 3)
		{
			del_node(p);
			count = 0;
		}

		p = p->next;
	}
	printf("p = %d\n", p->num);

	return 0;
}
