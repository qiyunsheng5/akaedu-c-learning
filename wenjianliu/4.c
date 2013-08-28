#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char buf[1024];
	int len = 0;
	char ch;
	printf("%d\n", BUFSIZ);

	fp = fopen(argv[1], "w+");
	perror("fopen");

	while((ch = fgetc(stdin)) != EOF)
		fputc(ch, fp);

	fseek(fp, 0, SEEK_SET);
//	rewind(fp);
//	len = ftell(fp);
//	fseek(fp, -len, SEEK_CUR);

	while(len = fread(buf, 1, 1024, fp))
		fwrite(buf, 1, len, stdout);

	fclose(fp);


	return 0;
}
