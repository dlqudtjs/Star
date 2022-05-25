#include "player.h"
#include "util.h"

#include <Windows.h>

Player::Player() {
    this->x = 14;
    this->y = 28;
}


Player::~Player() {

}

void Player::on_started() {
    
}

void Player::on_tick() {
    if (util::is_key_pressed(VK_LEFT)) {
        this->x -= 1;
        if (this->x < 0) x = 0;
    }
    
    if (util::is_key_pressed(VK_RIGHT)) {
        this->x += 1;
        if (this->x > 28) x = 28;

    }
}                     

void Player::draw() {
    util::puts_to(this->x, this->y, "бу");
}