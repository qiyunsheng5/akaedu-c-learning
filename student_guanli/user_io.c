#include <stdio.h>
#include <string.h>
#include "student.h"

struct cmd
{
	char name[16];
	int (*pf)(int argc, char * argv[]);
}cmds[] = 
{
	{"load", load},
	{"list", list},
	{"sort", sort},
	{"find", find}
};

void user(char* buf)
{
	int argc = 0;
	char *argv[10];
	
	argv[argc] = strtok(buf, " \n");
	
	argc = 1;
	while(argv[argc] = strtok(NULL, " \n"))		
	{
		argc++;
	}
	int i = 0;
	for(i = 0; i < 4; i++)
	{
		if(strcmp(argv[0], cmds[i].name) == 0)
		{	
			cmds[i].pf(argc, argv);
			break;
		}
					
	}

}
