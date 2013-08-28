#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	char ch[1024];
	int len = 0;
	FILE *fp, *cp;

	fp = fopen(argv[1], "r");
	perror("fopen1");
	cp = fopen(argv[2], "w");
	perror("fopen2");

	while(len = fread(ch, 1, sizeof(ch), fp))
		fwrite(ch, 1, len, cp);

	fclose(fp);
	fclose(cp);

	return 0;
}
