#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(vpod)
{
	FILE *fp;
	char fn[100];
	int i = 3;

	while(1)
	{
		sprintf(fn, "file%d", i);
		fp = fopen(fn, "w");
		if(fp == NULL)
		{
//			printf("%d\n", errno);
			perror("fopen");
			printf("%s\n", strerror(errno));
//			printf("i = %d\n", i - 1);
			exit(-1);
		}
		i++;
	}
}
