//
// Created by Soomin on 2019-11-27.
//

#include "fold_block.h"
#include "block.h"
#include "array_2d.h"

fold_block::fold_block(int c1, int c2, int c3) {
    block * _part1 = new block(c1);
    _part1->set_location(2, 1);

    block * _part2 = new block(c2);
    _part2->set_location(2, 0);

    block * _part3 = new block(c3);
    _part3->set_location(1, 0);

    big_block::v.push_back(_part1);
    big_block::v.push_back(_part2);
    big_block::v.push_back(_part3);

    array_2d::insert(big_block::v);
}

void fold_block::rotate() {

}
