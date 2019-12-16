//
// Created by Soomin on 2019-11-27.
//

#include "color_block.h"
#include "block.h"
#include <set>
#include <vector>

using namespace std;

color_block::color_block(block *b) {
    s = set<block *>();
    if (b != nullptr)
        s.insert(b);

}

void color_block::insert(set<block *> blocks) { // insert set of color blocks in array_2d
    for (block *b : blocks) {
        b->set_group(this);
        s.insert(b);
    }

}

set<block *> color_block::get_set() {
    return s;
}

int color_block::get_set_size() {
    return this->s.size();
}

void color_block::explosion() {

}


