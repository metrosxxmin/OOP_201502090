//
// Created by Soomin on 2019-11-27.
//

#include "block.h"

block::block(int color) {
    this->color = color;
    this->x = 0;
    this->y = 0;
    this->group = new color_block(this);
}

block::~block() {

}

int block::get_color() {
    return this->color;
}

int block::get_x() {
    return this->x;
}

int block::get_y() {
    return this->y;
}

void block::set_group(color_block *group) {

}

color_block* block::get_group() {
    return nullptr;
}

void block::set_location(int x, int y) {
    this->x = x;
    this->y = y;
}

bool block::can_left() {
    return false;
}

bool block::can_right() {
    return false;
}

bool block::can_down() {
    return false;
}

void block::right() {

}

void block::left() {

}

void block::down() {

}

void block::down_all() {

}

bool block::can_merge(block *b) {
    return false;
}

bool block::can_explosion(block *b) {
    return false;
}

void block::merge(block *b) {

}

void block::find_merge() {

}

