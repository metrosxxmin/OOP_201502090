//
// Created by Soomin on 2019-11-27.
//

#include "tree_block.h"

tree_block::tree_block(int c1, int c2, int c3) {
    block * _part1 = new block(c1);
    _part1->set_location(2, 2);

    block * _part2 = new block(c2);
    _part2->set_location(2, 1);

    block * _part3 = new block(c3);
    _part3->set_location(2, 0);

    big_block::v.push_back(_part1);
    big_block::v.push_back(_part2);
    big_block::v.push_back(_part3);

    array_2d::insert(big_block::v);
}

void tree_block::rotate() {

}
