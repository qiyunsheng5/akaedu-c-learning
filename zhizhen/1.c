#include <stdio.h>

const char glocal[5] = {"abcde"} ;



int main(void)
{
	const int local = 100;
	printf("local = %p, glocal = %p\n", &local, &glocal);
	printf("main = %p\n", main);

	while(1);

	return 0;
}
