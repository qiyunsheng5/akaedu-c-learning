#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])	
{
	char *str = NULL;
	char *p = NULL;
	char *q = NULL;
	char *k = NULL;
	if(argc < 2)
	{	
		printf("ni sha bi ba\n");
		exit(-1);
	}

	q = strtok_r(argv[1], ":;", &p);
	while(q)
	{
		printf("%s\n", q);
		k = strtok_r(q, "/", &str);
		while(k)
		{
			printf("-->%s\n", k);
			k = strtok_r(NULL, "/", &str);
		}
		q = strtok_r(NULL, ";:", &p);
		
	}



	return 0;
}

