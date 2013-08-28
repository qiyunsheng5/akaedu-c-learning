#include <stdio.h>

void say(char *p)
{
	printf("hello, %s\n", p);
}
typedef void (*F)(char *);
typedef void F1(char *);
int main(void)
{
	int a;
	F f;
	f = say;
	((F1*)(0x80483e4))("gun");
	a = 0x80483e4;
	printf("%p\n", say);

	((F)a)("akaedu");

	return 0;
}
