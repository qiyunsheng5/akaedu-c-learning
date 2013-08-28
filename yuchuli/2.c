#include <stdio.h>


int main(void)
{
	
#if debug
		printf("nishabi\n");
#elif max
		printf("shabi\n");
#endif

	return 0;
}

