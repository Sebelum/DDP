//myshel wihasna prastika ( 2117051061 )


#include <ncurses>
#include <unistd.h>
using namespace std;


int main(){
	
	initscr();
	start_color();
	init_pair(1,COLOR_BLACK,COLOR_GREEN);
	init_pair(2,COLOR_BLACK,COLOR_WHITE);
	init_pair(3,COLOR_BLACK,COLOR_CYAN);
	
  attron(COLOR_PAIR(1));
  sleep(1);
	printw("Nama : ");
	attroff(COLOR_PAIR(1));
	refresh();
  
  attron(COLOR_PAIR(2));
  sleep(1);
	printw(" Myshel ");
	attroff(COLOR_PAIR(2));
	refresh();

  attron(COLOR_PAIR(3));
  sleep(1);
	printw(" wihasna ");
	attroff(COLOR_PAIR(3));
	refresh();

  attron(COLOR_PAIR(2));
  sleep(1);
	printw(" prastika ");
	attroff(COLOR_PAIR(2));
	refresh();

  clear();

  attron(COLOR_PAIR(3));
  sleep(1);
	printw(" NMP : ");
	attroff(COLOR_PAIR(3));
	refresh();
  
  attron(COLOR_PAIR(1));
  sleep(1);
	printw("21");
	attroff(COLOR_PAIR(1));
	refresh();

  attron(COLOR_PAIR(1));
  sleep(1);
	printw("17");
	attroff(COLOR_PAIR(1));
	refresh();

  attron(COLOR_PAIR(1));
  sleep(1);
	printw("05");
	attroff(COLOR_PAIR(1));
	refresh();

  attron(COLOR_PAIR(1));
  sleep(1);
	printw("10");
	attroff(COLOR_PAIR(1));
	refresh();

  attron(COLOR_PAIR(1));
  sleep(1);
	printw("61");
	attroff(COLOR_PAIR(1));
	refresh();

 attron(COLOR_PAIR(1));
  sleep(1);
	printw(" ");
	attroff(COLOR_PAIR(1));
	refresh();


  clear();
	
	refresh();
	getch();
	endwin();
	
}
