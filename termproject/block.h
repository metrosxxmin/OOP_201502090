//
// Created by Soomin on 2019-11-27.
//

#ifndef PUYOPUYO_BLOCK_H
#define PUYOPUYO_BLOCK_H


#include "color_block.h"

class block {
protected:
    int color;
    int x, y;
    color_block * group;
public:
    block(int color);
    ~block();
    int get_color();
    int get_x();
    int get_y();
    void set_group(color_block * group);
    color_block * get_group();
    void set_location(int x, int y);
    bool can_left();
    bool can_right();
    bool can_down();
    void right();
    void left();
    void down();
    void down_all();
    bool can_merge(block * b);
    bool can_explosion(block * b);
    void merge(block * b);
    void find_merge();
};

#endif //PUYOPUYO_BLOCK_H

