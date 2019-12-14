//
// Created by Soomin on 2019-11-27.
//

#ifndef PUYOPUYO_TREE_BLOCK_H
#define PUYOPUYO_TREE_BLOCK_H

#include "block.h"
#include "array_2d.h"

class tree_block: public big_block {
public:
    static int flag;
    tree_block(int c1, int c2, int c3);
    void rotate();
};

#endif //PUYOPUYO_TREE_BLOCK_H

