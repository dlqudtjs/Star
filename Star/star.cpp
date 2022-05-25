#include "star.h"
#include "util.h"
#include "player.h"
#include <stdio.h>
#include <Windows.h>

Star::Star() {  
    this->width = 15;
    this->height = 30;
    util::hide_cursor();
    util::set_console_size(this->width, this->height);

    this->player = new Player();
}                          

Star::~Star() {
    delete this->player;
}

void Star::start() {
    this->on_started();

    while (true) {
        this->on_tick();
        Sleep(17);
    }
}

void Star::on_started() {
    printf("started!\n");
    this->player->on_started();
}

void Star::on_tick() {
    this->player->on_tick();
    this->update_screen();
}

void Star::update_screen() {
    util::clear_screen();
    this->player->draw();
}