#include <stdio.h>



struct test{
	char a;
	short b;
	int c;
	char d;
//} __attribute__((packed)) s;
	} s;


//#define pianyi(x) printf("%d\n", &(((struct s*) 0x0)->x))

int main(void)
{

//	pianyi(a);
	printf("%p\n", (&(((struct test*)0x0)->c)));
//	printf("%d\n", s.c);

	return 0;
}
