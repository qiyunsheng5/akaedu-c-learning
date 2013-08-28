#include <stdio.h>
#include <string.h>
#include "student.h"

int main(void)
{
	char buf[128];
	printf("student guanli xitong 1.0\n");
	while(1)
	{
		printf("\n");
		printf("student&:");
		fgets(buf, 128, stdin);
		user(buf);
	}
	return 0;
}
