#include <stdio.h>
#include <string.h>


int main(void)
{
	char buf[20] = "hello world";
	printf("%s\n", buf);
	memcpy(buf + 1, buf, 13);
	printf("%s\n", buf);
}
