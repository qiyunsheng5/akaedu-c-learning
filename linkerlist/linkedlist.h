#include <stdio.h>
#include <stdlib.h>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node * link;

struct node
{
	int num;
	link next;
	link prev;
};

link head;
link tail;

link make_node(int n)
{
	link p = malloc(sizeof(p));
	p->num = n;
	p->next = NULL;
	p->prev = NULL;

	return p;
}

void free_node(link p)
{
	free(p);
}


void insert(link p)
{
	if(head == NULL)
	{
		head = tail =NULL;
		head->next = head;
		head->prev = head;
//		return;
	}
	if(head == tail)
	{
		printf("2\n");
		tail = p;
		head->next = p;
		head->prev = p;
		tail->next = head;
		tail->prev = head;
		return;
	}
	printf("2\n");
	tail->next = p;
	p->next = head;
	p->prev = tail;
	tail = p;

}

void del_node(link p)
{
	if(head->next == head)
	{
		head = tail = NULL;
		free_node(head);
		return;
	}
	else if(p == head)
	{
		if(head->next == tail)
		{
			head = tail;
			tail->next = tail;
			tail->prev = head;
		}
		else
		{	
			head->next->prev = head->prev;
			tail->prev = head->next;
			head = head->next;
		}
		free_node(p);
		return;
	}
	else
	{
		p->prev->next = p->next;
		p->next->prev = p->prev;
		if(p == tail)
		{
			tail = p;
			free_node(p);
			return;
		}
		free_node(p);
	}
	}

void search_node()
{
	if(head == NULL)
	{
		printf("this is link no head\n");
		return;
	}
	link p = head;
	do
	{
		printf("p->num = %d\n", p->num);
		p = p->next;
	}while(p != head);
}

void set_tail()
{
	link p = head;
	while(p->next)
		p = p->next;
	tail = p;

}

void free_list()
{
	if(head == NULL)
		return;
	link p = head;
	while(p = p->next)
	{
		free_node(p);
	}
	free_node(head);
	head = NULL;
}
#endif
