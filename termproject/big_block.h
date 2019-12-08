//
// Created by Soomin on 2019-11-27.
//

#ifndef PUYOPUYO_BIG_BLOCK_H
#define PUYOPUYO_BIG_BLOCK_H

#include <vector>
#include "block.h"

using namespace std;

class big_block {
protected:
    vector<block *> v;
    static int min_x, min_y, max_x, max_y;
public:
    ~big_block();
    void rotate();
    bool can_left();
    bool can_right();
    bool can_down();
    void left();
    void right();
    void down();
    void down_all();
    bool move();   // call array_2d's gravity func.
    bool met_floor();
};

#endif //PUYOPUYO_BIG_BLOCK_H

