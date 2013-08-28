#include <stdio.h>
#include <string.h>
#include <curses.h>
int main()
{
	int i = 10;
	char ch;
	char *p = "hello";
	char buf[100];
	initscr();
	box(stdscr, ACS_VLINE, ACS_HLINE); /*draw a box*/
	while(1)
	{
		clear();
		move(i, COLS/2); /*move the cursor to the center*/
		waddstr(stdscr, p);
		refresh();
		system("stty raw");
		while(1)
		{
			ch = getchar();
			if(ch == *p)
			{
				move(i+4, COLS/2);
				waddstr(stdscr, &ch);
				refresh();
			}
			else
			p++;
		 }
		system("stty -raw");
		
		sleep(1);
	}
	clear();
	getch();
	endwin();
	return 0;
}
