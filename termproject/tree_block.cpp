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
    big_block::flag++;

    block * _part1 = big_block::v.at(0);
    block * _part2 = big_block::v.at(1);
    block * _part3 = big_block::v.at(2);
    block * _part4 = new block(_part1->get_color());
    block * _part5 = new block(_part3->get_color());

    if (array_2d::visit_check(_part2->get_x() - 1, _part2->get_y())) return;
    if (array_2d::visit_check(_part2->get_x() + 1, _part2->get_y())) return;
    if (array_2d::visit_check(_part2->get_x(), _part2->get_y() - 1)) return;
    if (array_2d::visit_check(_part2->get_x(), _part2->get_y() + 1)) return;

    if (big_block::flag % 4 == 1) {
        _part4->set_location(_part2->get_x() - 1, _part2->get_y());
        _part5->set_location(_part2->get_x() + 1, _part2->get_y());

    } else if (big_block::flag % 4 == 2) {
        _part4->set_location(_part2->get_x(), _part2->get_y() - 1);
        _part5->set_location(_part2->get_x(), _part2->get_y() + 1);

    } else if (big_block::flag % 4 == 3) {
        _part4->set_location(_part2->get_x() + 1, _part2->get_y());
        _part5->set_location(_part2->get_x() - 1, _part2->get_y());

    } else {
        _part4->set_location(_part2->get_x(), _part2->get_y() + 1);
        _part5->set_location(_part2->get_x(), _part2->get_y() - 1);
    }

    if (!array_2d::can_move(_part4->get_x(), _part4->get_y())
        || !array_2d::can_move(_part5->get_x(), _part5->get_y())) {
        big_block::flag--;
        return;
    }
    array_2d::delete_block(_part1->get_x(), _part1->get_y());
    array_2d::delete_block(_part3->get_x(), _part3->get_y());
    big_block::v.clear();

    big_block::v.push_back(_part4);
    big_block::v.push_back(_part2);
    big_block::v.push_back(_part5);

    array_2d::insert(big_block::v);
}
