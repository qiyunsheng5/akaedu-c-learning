#include<stdio.h>




void fuck();

int main(void)
{
	int i;

	for(i = 0; i < 3; i++)
		fuck();

	fuck();
	return 0;
}
void fuck()
{
	static  int a = 0;
	printf("%d\n", a);
	a++;
	printf("%d\n", a);
	
}
