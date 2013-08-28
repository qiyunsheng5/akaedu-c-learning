#include <stdio.h>

int main(void)
{
	int **p;

	p = 0x804a000;
	*p = 0x804a000;
//	**p = 0x804a0a0;
//	printf("%p\n", **p);

	return 0;
}
