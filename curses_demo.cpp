#include <ncurses.h>

int main(int, char **) {

  initscr(); // initialize screen
  noecho();
  raw();
  keypad(stdscr, TRUE);
  curs_set(0);
  start_color();

  init_pair(1, COLOR_RED, COLOR_BLACK);
  init_pair(2, COLOR_GREEN, COLOR_BLACK);
  attron(COLOR_PAIR(2));

  int row = 5;
  int col = 10;

  while (true) {
    mvprintw(row, col, "*");
    int i = getch();
    mvprintw(row, col, " ");

    if (i == KEY_LEFT)
      col--;
    else if (i == KEY_RIGHT)
      col++;
    else if (i == KEY_UP)
      row--;
    else if (i == KEY_DOWN)
      row++;
    else if (i == 'g')
      attron(COLOR_PAIR(2));
    else if (i == 'r')
      attron(COLOR_PAIR(1));

    if (i == KEY_END)
      break;
  }

  endwin(); // disable curses, clear screen
}