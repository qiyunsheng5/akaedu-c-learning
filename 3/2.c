#include<stdio.h>


int main(void)
{
	int a = 0x12345678;
	char *p = (char *)&a;

	printf("%x\n", *p);

	

	return 0;
}


