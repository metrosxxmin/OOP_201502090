//
// Created by Soomin on 2019-11-27.
//

#ifndef PUYOPUYO_COLOR_BLOCK_H
#define PUYOPUYO_COLOR_BLOCK_H

#include <set>

using namespace std;

class block;
class color_block {
private:

    set<block *> s;                 // dealing with created block
public:
    color_block(block * b);
    void insert(set<block *> s);
    set<block *> get_set();
    int get_set_size();
    void explosion();
    // void set_set(vector<block *> v);

};

#endif //PUYOPUYO_COLOR_BLOCK_H

/*
 * 0. EMPTY
 * 1. GRAY
 * 2. RED
 * 3. BLUE
 * 4. GREEN
 * */
