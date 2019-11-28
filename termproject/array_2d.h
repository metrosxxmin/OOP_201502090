//
// Created by Soomin on 2019-11-27.
//

#ifndef PUYOPUYO_ARRAY_2D_H
#define PUYOPUYO_ARRAY_2D_H

#include <set>
#include "block.h"
#include "color_block.h"

using namespace std;

class array_2d {
protected:
    static const int W = 5;
    static const int H = 12;
    block * block_array[W][H];
    set<color_block *> explosion_s;
    static int score;
public:
    array_2d();;
    bool can_make(int type);
    void delete_block(int x, int y);
    void insert(vector<block *> v);
    void insert(int x, int y, block * b);
    block *get_block(int x, int y);
    bool can_move(int x, int y);
    void print();
    void insert_explosion(color_block * group);
    void remove_explosion(color_block * group);
    bool can_explosion();
    void explosion();
    int get_score();
};

#endif //PUYOPUYO_ARRAY_2D_H

