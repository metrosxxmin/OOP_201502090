//
// Created by Soomin on 2019-11-27.
//

#ifndef PUYOPUYO_FOLD_BLOCK_H
#define PUYOPUYO_FOLD_BLOCK_H

#include "color_block.h"
#include "big_block.h"
#include "array_2d.h"


class fold_block: public big_block {
public:
    static int flag;
    fold_block(int c1, int c2, int c3);
    void rotate();
};

#endif //PUYOPUYO_FOLD_BLOCK_H

