#include <stdio.h>
#include <ncurses.h>

int
main(int argc, char** argv)
{
	initscr();			/* Start curses mode 		  */
    start_color();
    init_pair(1, COLOR_BLACK, COLOR_GREEN);
    attron(COLOR_PAIR(1));

	printw("Hello World !!!");	/* Print Hello World		  */
	
	refresh();			/* Print it on to the real screen */
	getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */

  return 0;
}
