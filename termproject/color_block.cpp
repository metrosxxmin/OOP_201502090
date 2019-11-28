//
// Created by Soomin on 2019-11-27.
//

#include "color_block.h"
#include <set>

using namespace std;

color_block::color_block(block *b) {
    //this->s.insert(b);
}

void color_block::insert(std::set<block *> s) {

}

set<block *> color_block::get_set() {
    return this->s;
}

int color_block::get_set_size() {
    return this->s.size();
}

void color_block::explosion() {

}

