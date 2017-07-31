#include <iostream>
#include <ncurses.h>

int main() {
    std::cout << "Starting";

    // initialise curses
    initscr();

    // disable TTY buffering
    cbreak();

    // disable echoing of typed characters
    noecho();

    // capture special characters
    keypad(stdscr, true);

    // do stuff
    printw("Hello world");
    getch();

    // end the curses session
    endwin();
}
