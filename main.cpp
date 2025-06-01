#include <iostream>
#include <ncurses.h>

using namespace std;

int main() {
  initscr();
  move(3, 5);
  int c = getch();
  endwin();
  cout << "Program ran successfully" << endl;
  return 0;
}
