#include <stdio.h>


int is_zimu(char *p)
{
	if(*p>= 'a' && *p <= 'z' || *p >= 'A' && *p <= 'Z')
		return 1;
	else 
		return 0;
}



int main(void)
{
	char buf[128];
	char *k;
	char a[32];
	int n = 0;
	int z = 0;
	int d = 0;
	char *p;
	char *q;
	q = a;
	while(1)
	{
		k = fgets(buf , 128, stdin);
		if(k == NULL)
			break;

		p = buf;
		while(1)
		{
			if(*p == '\n')
			{
				n++;
				break;
			}
			else if(is_zimu(p))
			{
				*q = *p;
				q++;
				p++;
				z++;
			}
			else 
			{
				p++;
				if(q != a)
				{
					*q = '\0';
					d++;
					printf("<%s>\n", a);
				}
				q = a;
			}
		}
	}
	printf("danci = %d, zifu = %d, hangshu = %d\n", d, z, n);

	return 0;
}
