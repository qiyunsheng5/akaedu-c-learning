#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char buf[1024];

	fp = fopen("haha", "w");
	perror("fopen");

	while(fread(buf, 1, sizeof(buf), stdin))
		fwrite(buf, 1, strlen(buf), fp);

	fclose(fp);

	return 0;


}
