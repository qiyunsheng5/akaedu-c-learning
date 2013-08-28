#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	FILE *fp, *fd;
	char ch;
	char buf[1024];
	char str[1024];
	char max_str[1024];
	char *p;
	char len1;
	int len = 0;
	int max = 0;
	int max_max = 1024;

	fp = fopen(argv[1], "r");
	fd = fopen(argv[2], "w");
	while(1)
	{
		fseek(fp, 0, SEEK_SET);
		max = 0;
//		printf("%s", fgets(buf, 1024, fp));
		while(fgets(buf, 1024, fp))
		{
			p = strtok(buf, " ");	
			len = atoi(p);
			p = strtok(NULL, " ");
			printf("%d, %d\n", len, max_max);
			if(len > max && len <= max_max && strcmp(max_str, p) != 0)
			{
				max = len;
				strcpy(str, p);
				continue;
			}
	//		usleep(100000);
		}
		if(max == 0)
			break;
		max_max = max;
		strcpy(max_str, str);
	//	printf("%d, %s", max_max, str);
//		sleep(1);
		fwrite(max_str, 1, strlen(max_str), fd);
	}
	fclose(fp);
	fclose(fd);
//	printf("%d, %s", max, str);

	return 0;
}
