#include <stdio.h>
#include <string.h>
#include "student.h"

stu_t st[40];
int num;
void load_file(char *filename)
{
	char buf[1024];
	FILE *fd;
	int ret = 1;
	int i = 0;
	char *p;

	fd = fopen(filename, "r");
	while(1)
	{	
		memset(buf, 0, 1024);
		p = fgets(buf, 1024, fd);	
		if(p == NULL)
			break;
		ret = sscanf(buf, "%s %s %d %s %s %s %s %s %s",
			st[i].name,
			st[i].cname,
			&st[i].age,
			st[i].gender,
			st[i].native,
			st[i].mobile,
			st[i].qq,
			st[i].email,
			st[i].hobby);
		if(st[i].hobby == NULL)
		{
			printf("%s no hobby!!!!\n", st[i]. cname);
		}
		i++;
	}
	num = i;

	return ;
}
void printf_st(int i)
{
}
void list_all(void)
{
	int i = 0;
	for(i = 0; i < num; i++)
		printf("student %d : %s\n", i+1, st[i].cname);
}
int cmp_age(const char *a, const char *b)
{
	return ((struct student*)a)->age - ((struct student *)b)->age;
}
int cmp_name(const char *c, const char *d)
{
	return strcmp(((struct student*)c)->name, ((struct student *)d)->name);
}

void sort_age(void)
{
	qsort(st, num, sizeof(stu_t), cmp_age);
	list_all();
}
void sort_name(void)
{
	qsort(st, num, sizeof(stu_t), cmp_name);
	list_all();
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
	for(i = 0; i < num; i++)
	{

		if(strcmp(st[i].native, native) == 0)
			printf("%s\n", st[i].cname);
	}
	return;
}
void find_hobby(char * hobby)
{
	int i = 0;
	for(i = 0; i < num; i++)
	{
		if(strstr(st[i].hobby, hobby) != NULL)
			printf("%s\n", st[i].cname);
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
