#include <stdio.h>
#include <string.h>

//char a[] = "hello";	
static int a = 6;
void aas()
{
	printf("%d\n", a);
}
int main(void)
{

	int a = 8;
	aas();
	printf("%d\n", a);
	return 0;
}
