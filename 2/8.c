#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[1024];
	char c;
	int len;
	int i;
	int count = 0;

	gets(str);
	c = getchar();

	len = strlen(str);
//	printf("%c\n", c);
	
	for(i = 0; i < len; i++)
	{
		if(c == str[i])
		{
			count++;
		}
	}
	
	printf("%c ci shu shi %d\n", c, count);

	return 0;
}
