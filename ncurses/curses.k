
class Curses;

class CWindow;

Curses Curses.new(int h, int w, int startx, int starty);
void Curses.initscr();
void Curses.noecho();
void Curses.cbreak();
void Curses.clear();
void Curses.mvprintw();
void Curses.refresh();
void Curses.endwin();
void Curses.clrtoeol();


void Curses.box(int a, int b);
void Curses.mvwprintw(int y, int x, String fmt, Array args);
void Curses.wattron(int attr);
void Curses.wattroff(int attr);

void Curses.keypad(int flag);
void Curses.wrefresh();

int Curses.A_REVERSE;


