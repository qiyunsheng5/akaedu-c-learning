#include <stdio.h>
#include <string.h>

#define N 12400

typedef struct danci{
	char buf[32];
	int len;
	int freq;
	char trans[64];
}dc;
dc d[N];

int num = 0;

int is_zimu(char c)
{
	if(c >= 'a' && c <= 'z' || c >= 'A'&& c <= 'Z')
		return 1;
	else
		return 0;
}

int is_cf(char *wd)
{
	int j = 0;

	for(j = 0; j < num; j++)
	{
		if(strcmp(wd, d[j].buf) == 0)
		{
			d[j].freq++;
			return 1;
		}
	}
	return 0;
}


int main(void)
{
	char ch;
	int max = 0;
	int i = 0;
	int n = 0;
	int j = 0;
	int count = 0;

	while((ch = getchar()) != EOF)
	{
		if(is_zimu(ch))
		{
			d[num].buf[i] = ch;
			i++;
			continue;
		}
		if(i > 0)
		{	
			d[num].buf[i] = '\0';
			d[num].len = strlen(d[num].buf);
			if(d[num].len > max)
				max = d[num].len;
			if(is_cf(d[num].buf))
			{
				i = 0;
				count++;
				continue;
			}
			printf("%-2d-%-2d <%s>\n",num + 1, d[num].len, d[num].buf);
			i = 0;
			num++;
		}
	}
	printf("chongwu = %d\n", count);
	dc c[count];
	dc temp;
	j = 0;

	for(i = 0; i < num; i++)
	{	
		if(d[i].len == max)
			printf("max = %-2d, <%s>\n", max, d[i].buf);
		if(d[i].freq > 0)
		{
			c[j++] = d[i];
		}
	
	}
	
	for(i = 0; i < j; i++)
	{
		for(n = i + 1; n < j; n++)
		{
			if(c[n].freq > c[i].freq)
			{
				temp = c[i];
				c[i] = c[n];
				c[n] = temp;
			}
		}
	}
	for(i = 0; i < j; i++)
		printf("%d   %s\n", c[i].freq, c[i].buf);
	

	return 0;
}
