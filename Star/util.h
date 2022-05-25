namespace util {
    void set_console_size(int width, int height);
    void gotoxy(int x, int y);
    void puts_to(int x, int y, const char *str);
    void hide_cursor();
    bool is_key_pressed(int key_code);
    void clear_screen();
}