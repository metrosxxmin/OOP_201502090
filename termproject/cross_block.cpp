//
// Created by Soomin on 2019-11-27.
//

#include "cross_block.h"

cross_block::cross_block(int c1, int c2, int c3, int c4, int c5) {
    block * _part1 = new block(c1);
    _part1->set_location(2, 2);

    block * _part2 = new block(c2);
    _part2->set_location(2, 1);

    block * _part3 = new block(c3);
    _part3->set_location(2, 0);

    block * _part4 = new block(c4);
    _part4->set_location(1, 1);

    block * _part5 = new block(c5);
    _part5->set_location(3, 1);

    big_block::v.push_back(_part1);
    big_block::v.push_back(_part2);
    big_block::v.push_back(_part3);
    big_block::v.push_back(_part4);
    big_block::v.push_back(_part5);

    array_2d::insert(big_block::v);
}

void cross_block::rotate() {

}
