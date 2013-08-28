#include <stdio.h>
#include "duilie.h"

int maze[5][5] = {
	0, 1, 0, 0, 0,
	0, 1, 0, 1, 0,
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 1, 0,
};

void printf_maze(void)
{
	int i, j;

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			printf("%d ", maze[i][j]);
		printf("\n");
	}
	printf("\n");
	printf("***************************************\n");
}

void visit(int h, int l)
{
	struct point p = {h, l};
	maze[h][l] = 2;
	
	enqueue(p);
}


int main(void)
{
	struct point p = {0, 0};
	visit(p.h, p.l);

	while(!is_empty())
	{
		p = dequeue();
		maze[p.h][p.l] = 3;
		if(p.h > 4 && p.l > 4) //chule
			break;
		if(p.h+1 < 5 && maze[p.h+1][p.l] == 0) //down
			visit(p.h+1, p.l);
		if(p.l+1 < 5 && maze[p.h][p.l+1] == 0 )//right
			visit(p.h, p.l+1);
		if(p.h-1 >= 0 && maze[p.h-1][p.l] == 0)//up
			visit(p.h-1, p.l);
		if(p.l-1 >= 0 && maze[p.h][p.l-1] == 0)//up
			visit(p.h, p.l-1);
		if(p.h == 4 && p.l == 4)
			break;
		printf_maze();
		if(maze[4][4] == 2)
			break;
		sleep(1);

	}
//	printf_maze();
	return 0;
}
