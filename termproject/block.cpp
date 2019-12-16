//
// Created by Soomin on 2019-11-27.
//

#include "block.h"
#include "array_2d.h"

block::block(int color) {
    this->color = color;
    this->set_location(0, 0);
    group = new color_block(this);
}

block::~block() {
    this->color = 0;
}

int block::get_color() {
    return this->color;
}

void block::set_color(int _color) {
    this->color = _color;
}

int block::get_x() {
    return this->x;
}

int block::get_y() {
    return this->y;
}

void block::set_group(color_block *group) {
    this->group = group;
}

color_block* block::get_group() {
    return this->group;
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
    if (b->color == 0) return false;
    if (b->color == 1) return false;

    return b->color == color;
}

bool block::can_explosion(block *b) {
    return group->get_set_size() >= 4;
}

void block::merge(block *b) {
    auto *nb = new color_block(nullptr);
    color_block *bg = b->get_group();
    color_block *tg = group;
    nb->insert(bg->get_set());
    nb->insert(tg->get_set());
    delete (bg);
    bg = nullptr;
    delete (tg);
    tg = nullptr;
}

void block::find_merge() {
//    int dx[4] = {1, -1, 0, 0};
//    int dy[4] = {0, 0, 1, -1};
//
//    for (int i = 0; i < 4; i++) {
//        int _x = x + dx[i];
//        int _y = y + dy[i];
//
//        block *_block = array_2d::get_block(_x, _y);
//        if (_block != nullptr && can_merge(_block))
//            merge(_block);
//    }



}



