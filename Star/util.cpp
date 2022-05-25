#include "util.h"

#include <stdio.h>
#include <Windows.h>



void util::set_console_size(int width, int height) {
    char str[100];
    sprintf_s(str, "mode con cols=%d lines=%d", width * 2, height);
    system(str);
}

void util::gotoxy(int x, int y) {
    COORD coord = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void util::puts_to(int x, int y, const char* str) {
    gotoxy(x, y);
    puts(str);
}

void util::hide_cursor() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 1;
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hOut, &cci);
}

bool util::is_key_pressed(int key) {
    if (GetAsyncKeyState(key) & 0x8000) {
        return true;
    }

    return false;
}

void util::clear_screen() {
    system("cls");
}

