#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{	
	char *p;
	int i;

	p = malloc(1);
	*p = 'a';
	
	for(i = 1; i <= 10; i++)
	{
		p = realloc(p, i + 1);
		*(p + i) = 'a' + i;
	}
	p = realloc(p, i + 1);
	*(p + i) = '\0';

	printf("%s\n", p);
	
	free(p);


	return 0;
}
