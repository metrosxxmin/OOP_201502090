//
// Created by Soomin on 2019-11-27.
//

#include <iostream>
#include <vector>
#include "array_2d.h"
#include "color_block.h"

int array_2d::score = 0;
int array_2d::count = 0;
block * array_2d::block_array[W][H] = {0,};
bool array_2d::can_visit[W][H] = {0,};

set<color_block *> array_2d::explosion_s;

array_2d::array_2d() {
    array_2d::score = 0;
    array_2d::explosion_s = set<color_block *>();

    int i = 0, j = 0;
    for (i = 0; i < H; ++i) {
        for (j = 0; j < W; ++j) {
            block_array[j][i] = new block(0);       // enum type is NONE
            block_array[j][i]->set_location(j, i);
        }
    }
}

bool array_2d::can_make(int type) {                 // Can you make new blocks in the board?
    bool res = false;

    if (type == 1) {    // this's fold block
        if (block_array[2][1]->get_color() == 0 &&
            block_array[2][0]->get_color() == 0 &&
            block_array[1][0]->get_color() == 0)
            res = true;
    }
    if (type == 2) {    // this's tree block
        if (block_array[2][0]->get_color() == 0 &&
            block_array[2][1]->get_color() == 0 &&
            block_array[2][2]->get_color() == 0)
            res = true;
    }
    if (type == 3) {    // this's cross block
        if (block_array[2][0]->get_color() == 0 &&
            block_array[2][1]->get_color() == 0 &&
            block_array[2][2]->get_color() == 0 &&
            block_array[1][1]->get_color() == 0 &&
            block_array[3][1]->get_color() == 0)
            res = true;
    }

    return res;
}

void array_2d::delete_block(int x, int y) { // Delete merged same color block.
    block_array[x][y]->~block();
    array_2d::check_visit(x, y, 0);
}

void array_2d::insert(vector<block *> v) {          // Store all block filled in board.
    int idx = 0;
    for (auto& idx : v) {
        insert(idx->get_x(), idx->get_y(), idx);
    }
}

void array_2d::insert(int x, int y, block *b) {     // Change a value 0 to any number in the board.
    block_array[x][y] = b;
}

void array_2d::check_visit(int x, int y, bool state) {
    can_visit[x][y] = state;
}

bool array_2d::visit_check(int x, int y) {
    return can_visit[x][y];
}

block* array_2d::get_block(int x, int y) {          //
    return block_array[x][y];
}

bool array_2d::can_move(int x, int y) {             // Can you move the blocks in the board?
    if (x < 0 || W <= x) return false;
    if (y < 0 || H <= y) return false;
    if (visit_check(x, y)) return false;

    return true;
}

void array_2d::print() {                            //
    int i = 0, j = 0;
    for (i = 0; i < H; ++i) {
        for (j = 0; j < W; ++j) {
            cout << (int)(get_block(j, i)->get_color()) << " ";
        }
        cout << "\n";
    }
}

void array_2d::insert_explosion(color_block *group) {   //

}

void array_2d::remove_explosion() {   //

}

bool array_2d::can_explosion() {                    // Can the blocks are explosive in the board?
    int res = 0;

    return res;
}

bool array_2d::explosion() {                        //


    return 0;
}

int array_2d::get_score() {
    return score;
}

vector<block *> array_2d::gravity(vector<block *> v) {

    for (auto& idx : v) {
        while(1) {
            if (!can_move(idx->get_x(), idx->get_y() + 1)) break;
            if (block_array[idx->get_x()][idx->get_y() + 1]->get_color() != 0) break;

            int x = idx->get_x();
            int y = idx->get_y();

            idx = new block(idx->get_color());
            idx->set_location(x, y + 1);

            delete_block(x, y);
        }
        insert(v);
    }
    return v;
}

int array_2d::DFS[W][H] = {0,};
vector<block *> array_2d::exp_s;

void array_2d::post_process() {
    for (int i = H - 1; i > 0; --i) {
        for (int j = 0; j < W; ++j) {
            if (block_array[j][i]->get_color() == 0) continue;
            if (block_array[j][i]->get_color() == 1) continue;

            count = 1;
            if (array_2d::visit_check(j, i) && !array_2d::DFS[j][i]) {
                array_2d::dfs(j, i, block_array[j][i]->get_color());
            }
            if (array_2d::exp_s.size() >= 4) {
                // remove in the array_2d
                array_2d::kill_gray();
                for (auto &idx : exp_s)
                    array_2d::delete_block(idx->get_x(), idx->get_y());
                // gravity
                array_2d::score = score + 1;
            }

            array_2d::exp_s.clear();


            for (int k = 0; k < 10; ++k) {
                for (int i = H - 2; i >= 0; --i) {
                    for (int j = 0; j < W; ++j) {
                        if (array_2d::block_array[j][i]->get_color() != 0) {

                            int color = array_2d::block_array[j][i]->get_color();
                            int _x = array_2d::block_array[j][i]->get_x();
                            int _y = array_2d::block_array[j][i]->get_y();
                            if (!array_2d::visit_check(_x, _y + 1)) {
                                array_2d::block_array[j][i + 1]->set_color(color);
                                array_2d::delete_block(_x, _y);
                                array_2d::check_visit(_x, _y + 1, true);
                            }

                        }
                    }
                }
            }
        }
    }


    for (int i = H - 1; i > 0; --i) {
        for (int j = 0; j < W; ++j) {
            array_2d::DFS[j][i] = 0;
        }
    }

}

void array_2d::dfs(int x, int y, int color) {
    if (x > 0 && array_2d::block_array[x - 1][y]->get_color() == color && !array_2d::DFS[x - 1][y]) {
        array_2d::DFS[x - 1][y] = 1;
        exp_s.push_back(array_2d::block_array[x - 1][y]);
        array_2d::dfs(x - 1, y, color);
    }
    if (y > 0 && array_2d::block_array[x][y - 1]->get_color() == color && !array_2d::DFS[x][y - 1]) {
        array_2d::DFS[x][y - 1] = 1;
        exp_s.push_back(array_2d::block_array[x][y - 1]);
        array_2d::dfs(x, y - 1, color);
    }
    if (y < H - 1 && array_2d::block_array[x][y + 1]->get_color() == color && !array_2d::DFS[x][y + 1]) {
        array_2d::DFS[x][y + 1] = 1;
        exp_s.push_back(array_2d::block_array[x][y + 1]);
        array_2d::dfs(x, y + 1, color);
    }
    if (x < W - 1  && array_2d::block_array[x + 1][y]->get_color() == color && !array_2d::DFS[x + 1][y]) {
        array_2d::DFS[x + 1][y] = 1;
        exp_s.push_back(array_2d::block_array[x + 1][y]);
        array_2d::dfs(x + 1, y, color);
    }
}

void array_2d::kill_gray() {
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for (auto& idx : array_2d::exp_s) {
        for (int i = 0; i < 4; ++i) {
            array_2d::is_gray_block(idx->get_x() + dx[i], idx->get_y() + dy[i]);
        }
    }
}


void array_2d::is_gray_block(int x, int y) {
    if (x > -1 && x < W && y < H && y > -1) {
        int color = array_2d::block_array[x][y]->get_color();
        if (color == 1) {
            array_2d::delete_block(x, y);
            if (x > 0) is_gray_block(x - 1, y);
            if (x < W - 1) is_gray_block(x + 1, y);
            if (y < H - 1) is_gray_block(x, y + 1);
            if (y > 0) is_gray_block(x, y - 1);
        }
    }
}
