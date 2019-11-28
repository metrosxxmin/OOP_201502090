//
// Created by Soomin on 2019-11-27.
//

#ifndef PUYOPUYO_FOLD_BLOCK_H
#define PUYOPUYO_FOLD_BLOCK_H

#include "color_block.h"


class fold_block {
public:
    fold_block(int c1, int c2, int c3);
    void rotate();
};

#endif //PUYOPUYO_FOLD_BLOCK_H

