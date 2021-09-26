

#ifdef _WIN32

#include <Windows.h>

void HelloWorld(){
    HANDLE hNewScreenBuffer;

    hNewScreenBuffer = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    
    SetConsoleActiveScreenBuffer(hNewScreenBuffer);

    COORD size = {12, 1};
    COORD position = {0, 0};

    WORD attrib = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY;

    SMALL_RECT writeArea = {0, 0, 13, 13};
    CHAR_INFO info[12];
    

    const char* toPrint = "Hello World!";
    for (int i = 0; i < 12; i++) {
        info[i].Char.AsciiChar = toPrint[i];
        info[i].Attributes = attrib;
    }

    WriteConsoleOutput(hNewScreenBuffer, info, size, position, &writeArea);
    while (1) {
        Sleep(500);
    }
}

#elif __unix__
#include <ncurses.h>

void HelloWorld() {
    set_escdelay(0);
    
    initscr();
    start_color();
    init_pair(1, COLOR_BLACK, COLOR_RED);
    init_pair(2, COLOR_BLACK, COLOR_GREEN);

    cbreak();
    keypad(stdscr, true);
    noecho();
    WINDOW *editor;
    editor = newwin(1, 12, 0, 0);
    attron(COLOR_PAIR(2));
    mvwprintw(editor, 0, 0, "Hello World!\n");
    refresh();
    wrefresh(editor);
    
    int ch;
    while((ch = getch()) != 27){
        
    }
    endwin();
}

#endif

int main(void) {
    HelloWorld();
    return 0;
}