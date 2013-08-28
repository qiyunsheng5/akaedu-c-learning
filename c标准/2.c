#include <stdio.h>
#include <string.h>

char str[20] = "hello, world";
char *mystrtok(char *str, const char *p)
{
	char *q;
	int flag = 0;
	static char *s;
	static len ;

	

	if(str != NULL)
	{
		s = str;
		q = str;
		len = strlen(str);
	
		while(*s != '\0')
		{
			if(*s == *p)
			{
				*s = '\0';
				s++;
				if(*s != *p)
					break;
				else 
					s++;

			}
			s++;
		}
	}

	if(str == NULL)
	{
		q = s;	
	if(s == NULL)
		return NULL;
		
		while(*s != '\0')
		{
			
			if(*s == *p)
			{
				*s = '\0';
				s++;
				break;
			}
			s++;		
		}
		if(*s == '\0')
			s = NULL;
	}

	return q;
}


int main(void)
{
	
	char *p;
	char c = 'l';
	char *q = &c;

	p = mystrtok(str, q);

	printf("%s\n", p);
	
	while(p = mystrtok(NULL, q))
	{
		printf("%s\n", p);
//		if(p == NULL)
//			break;
		sleep(1);
	}

	return 0;
}
