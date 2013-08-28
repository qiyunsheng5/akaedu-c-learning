#include <stdio.h>
#include <string.h>


struct operations
{
	char name[16];
	int (*fp)(int, int);
};

typedef struct operations op_t;

void del_space(char *buf)
{
	char *p = buf;
	char *k;
	char *q = p;
	int flag = 0;
	while(*p)
	{
		if(*p != ' ' && *p != '\n' && flag == 0)
		{
			flag = 1;
		}
		else if((*p == ' ' || *p == '\n') && flag == 1)
		{
			flag = 0;
			printf("2\n");
		}
		else if(flag == 0)
		{
			q = p + 1;
			memmove(p, q, strlen(p));
			p--;
		}
		
		p++;
	}

		printf("<%s>\n", buf);
}


int parse(char *buf, char *argv[])
{	
	char *p;
	int argc = 1;
	int flag = 0;
	
	gets(buf);			
	p = buf;

	while(*p)
	{
		if(flag == 0 && *p != ' ' && *p != '\n')
		{
			argv[argc] = p;
			flag = 1;
			argc++;
		}
		else if(flag == 1 && (*p == ' ' || *p == '\n'))
		{	
			*p = '\0';
			flag = 0;
		}

		p++;
	}

		argv[argc] = NULL;
	
	return argc;
}

int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int dev(int a, int b)
{
	return a / b;
}

op_t ops[] = {
	{"add", add},
	{"sub", sub},
	{"dev", dev},
	{"mul", mul}
};


int main(void)
{
	char buf[100];
	char *argv[5];
	int argc = 1;
	



	while(1)
	{
//		gets(buf);
//		del_space(buf);
		argc = parse(buf, argv);
		printf("argc = %d, %s\n", argc - 1, argv[1]);

		int i;
		for(i = 0; i < sizeof(ops)/sizeof(ops[0]); i++)
		{
			int ret;
			ret = ops[i].fp(atoi(argv[2]), atoi(argv[3]));
			printf("%d\n", ret);
		}

	}

	return 0;
}
