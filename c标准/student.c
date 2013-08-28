#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct student
{
	char name[20];
	int id;
	int fen;
};

int main(int agrc, char *argv[])
{
	int k = 0;
	struct student *p;
	char *q;
	int i = 0;
	int count = 0;
	char d;

	k = atoi(argv[1]);
	i = k;
	count = k;

	p = calloc(k, sizeof(*p));
	q = p;

	while(k--)
	{
		printf("shuru xingming\n");
		gets(p->name);
		printf("shuru id\n");
		gets(&d);
		p->id = atoi(&d);
		printf("shuru fenshu\n");
		gets(&d);
		p->fen = atoi(&d);

		p++;
	}
	char c = '\0';

	i++;

	while(1)
	{
		printf("shi fou zai ci shuru, y/n?\n");
		gets(&c);
		if(c == 'y')
		{
			q = realloc(q, i);
			printf("shuru xingming\n");
			gets(p->name);
			printf("shuru id\n");	
			gets(&d);
			p->id = atoi(&d);
			printf("shuru fenshu\n");
			gets(&d);
			p->fen = atoi(&d);

			p++;
			count++;
			continue;
		}
		else if(c == 'n')
		{
			p = q;
			int j = 0;
			struct student s;
			struct student *n;
			char buf[20];
			int tmp = 0;
			for(i = 0; i < count - 1; i++,p++)
			{
				n = p + 1;
				for(j = i + 1; j < count; j++, n++)
				{
					if(strcmp(p->name, n->name) == -1)
					{
						s = *p;
						*p = *n;
						*n = s;
					}
				}
			}

			p = q;
			printf("xuesheng xinxi\n");
			while(count--)
			{
				printf("%s\n", p->name);
				printf("%d\n", p->id);
				printf("%d\n", p->fen);
				p++;
			}
			break;
		}
		i++;
	}
	

	return 0;
}
