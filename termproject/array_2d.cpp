//
// Created by Soomin on 2019-11-27.
//

#include <iostream>
#include <vector>
#include "array_2d.h"

int array_2d::score = 0;

array_2d::array_2d() {
    array_2d::score = 0;

    int i = 0, j = 0;
    for (i = 0; i < H; ++i) {
        for (j = 0; j < W; ++j) {
            block_array[j][i] = new block(0);     // enum type is NONE
            block_array[j][i]->set_location(i, j);
        }
    }
}

bool array_2d::can_make(int type) {
    return false;
}

void array_2d::delete_block(int x, int y) {

}

void array_2d::insert(vector<block *> v) {

}

void array_2d::insert(int x, int y, block *b) {

}

block* array_2d::get_block(int x, int y) {
    return block_array[x][y];
}

bool array_2d::can_move(int x, int y) {
    return false;
}

void array_2d::print() {
    int i = 0, j = 0;
    for (i = 0; i < H; ++i) {
        for (j = 0; j < W; ++j) {
            cout << (int)(get_block(j, i)->get_color()) << '\t';
        }
        cout << '\n\n';
    }
}

void array_2d::insert_explosion(color_block *group) {

}

void array_2d::remove_explosion(color_block *group) {

}

bool array_2d::can_explosion() {
    return false;
}

void array_2d::explosion() {

}

int array_2d::get_score() {
    return score;
}
