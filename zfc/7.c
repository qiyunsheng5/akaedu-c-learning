#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10240];
	char *q;
	char *p[200];
	char ch;
	int i = 1;
	int j = 0;

	while((ch = getchar()) != EOF)
	{
		str[j] = ch;
		j++;
	}
	str[j] = '\0';
	
	p[0] = strtok(str, "<");
	if(str[0] != '<')
		i = 0;
	while((p[i] = strtok(NULL, ">")) != NULL)
	{
		i++;
	}
	i = 0;
	while(p[i] != NULL)
	{
		q = strtok(p[i], "<");
//		q = strtok(NULL, "<");
		printf("%s\n", q);
		i++;
	}


	return 0;
}
