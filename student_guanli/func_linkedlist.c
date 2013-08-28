#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"


link make_node(void)
{
	link p;
	p = malloc(sizeof(*p));
	p->next = NULL;

	return p;
}

int insert(link p)
{
	if(head == NULL)
	{
		head = tail = p;
	}
	else
	{
		tail->next = p;
		tail = p;
	}

	return 0;
}

stu_t st[40];
int num;
void load_file(char *filename)
{
	char buf[1024];
	FILE *fd;
	int ret = 1;
	int i = 0;
	char *q;
	link p = NULL;

	fd = fopen(filename, "r");
	while(1)
	{	
		memset(buf, 0, 1024);
		q = fgets(buf, 1024, fd);	
		if(q == NULL)
			break;
		p = make_node();
		insert(p);
		ret = sscanf(buf, "%s %s %d %s %s %s %s %s %s",
			p->name,
			p->cname,
			&(p->age),
			p->gender,
			p->native,
			p->mobile,
			p->qq,
			p->email,
			p->hobby);
		
		i++;
	}
	
	num = i;

	return ;
}

void list_all(void)
{
	int i = 0;
	link p = head;
	for(i = 0; i < num; i++)
	{
		printf("student %d : %s\n", i+1, p->cname);
		p = p->next;
	}
}

#if 0
int cmp_age(const char *a, const char *b)
{
	return ((struct student*)a)->age - ((struct student *)b)->age;
}
int cmp_name(const char *c, const char *d)
{
	return strcmp(((struct student*)c)->name, ((struct student *)d)->name);
}

#endif/*	link k = head;
	p = head->next;
	k->next = p->next;
	p->next = k;
	head = p;*/
/*
	link k = head;
	p = head->next;
	link f = p->next;
	p->next = f->next;
	k->next = f;
	f->next = p;


	printf("%s\n", head->next->next->cname);
*/

void sort_age(void)
{
//	qsort(&head, num, sizeof(stu_t), cmp_age);
	link p = head;
	link q = head;
	link k = head;
	q = p->next;

	int i = 0;
	int j = 0;
	for(i = 0; i < num - 1; i++)
	{
		p = head;
		q = p->next;
		k = head;
		for(j = 0; j < num-i-1; j++)
		{
			if(p->age < p->age)
			{
				if(p == head)
				{
					p->next = q->next;
					q->next = p;
					head = q;
					q = p->next;
					continue;
				}
				else
				{
					p->next = q->next;
					q->next = p;
					k->next = q;
					k = k->next;
					q = p->next;
					continue;
				}
			}
			else
			{
				if(p == head)
				{
					p = p->next;
					q = q->next;
				}
				else
				{
					p = p->next;
					q = q->next;
					k = k->next;
				}
			}
		}
	}
	
	list_all();
	return;
}
void sort_name(void)
{
//	qsort(st, num, sizeof(stu_t), cmp_name);
	list_all();
	return;
}

int load(int argc, char *argv[])
{
	printf("load cmp\n");

	load_file(argv[1]);

	return 0;
}
int list(int argc, char *argv[])
{

	printf("list cmd\n");
	list_all();
	return 0;
}

int sort(int argc, char *argv[])
{
	printf("sort cmd\n");
	if(strcmp(argv[1], "name") == 0)
		sort_name();

	if(strcmp(argv[1], "age") == 0)
		sort_age();

	return 0;
}

void find_native(char * native)
{
	int i = 0;
	link p = head;
	for(i = 0; i < num; i++)
	{
		
		if(strcmp(p->native, native) == 0)
			printf("%s\n", p->cname);
		p = p->next;
	}
	return;
}
void find_hobby(char * hobby)
{
	int i = 0;
	link p = head;
	for(i = 0; i < num; i++)
	{
		if(strstr(p->hobby, hobby) != NULL)
			printf("%s\n", p->cname);
		p = p->next;
	}
	return;
}
int find(int argc, char *argv[])
{
	printf("find cmd\n");
	if(strcmp(argv[1], "native") == 0)
		find_native(argv[2]);

	if(strcmp(argv[1], "hobby") == 0)
		find_hobby(argv[2]);


	return 0;
}
