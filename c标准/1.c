#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{	
	int i = 0;
	int num = 0;

	for(i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	if(argc < 2)
	{	
		printf("ni sha bi ba\n");
		exit(-1);
	}

	num = atoi(argv[1]);

	printf("%d\n", num);

	for(i = 0; i < num; i++)
		printf("hahahaha\n");


	return 0;
}


