#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch;

	system("stty raw");
	while(1)
	{
		printf("can i fuck you? y/n \n\r");
		ch = getchar();
		if(ch == 'y')
			printf("come on!\n\r");
		else
			printf("gun du zi!\n\r");
	}
	
	system("stty -raw");

	return 0;
}

