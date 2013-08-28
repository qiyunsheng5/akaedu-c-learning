#include <stdio.h>
#include <string.h>

char *msg[] = {"sunday", "monday"};

char *get_a_day(int index)
{
 	static char buf[28];
	strcpy(buf, msg[index]);
	return buf;
}

int main(void)
{

	printf("%s, %s\n", get_a_day(0), get_a_day(1));

	return 0;
}
