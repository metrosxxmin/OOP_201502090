//
// Created by Soomin on 2019-11-27.
//

#ifndef PUYOPUYO_CROSS_BLOCK_H
#define PUYOPUYO_CROSS_BLOCK_H

#include "block.h"
#include "array_2d.h"

class cross_block: public big_block {
public:
    cross_block(int c1, int c2, int c3, int c4, int c5);
    void rotate();
};

#endif //PUYOPUYO_CROSS_BLOCK_H

