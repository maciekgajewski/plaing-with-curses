#include <ncurses.h>

int main(int, char **) {

  initscr(); // initialize screen

  // code goes here
  printw("Hello World !!!");
  refresh();
  getch();
  endwin(); // disable curses, clear screen
}