//
// Created by Soomin on 2019-11-27.
//

#ifndef PUYOPUYO_COLOR_BLOCK_H
#define PUYOPUYO_COLOR_BLOCK_H

#include <set>

using namespace std;

class block;
class color_block {
protected:
    enum _color {
        NONE,   // assigned 0

        GRAY,   // assigned 1
        RED,    // assigned 2
        GREEN,  // assigned 3
        BLUE    // assigned 4
    };
    set<block *> s;
public:
    color_block(block * b);
    void insert(set<block *> s);
    set<block *> get_set();
    int get_set_size();
    void explosion();

};

#endif //PUYOPUYO_COLOR_BLOCK_H

