//
// Created by Soomin on 2019-11-27.
//

#ifndef PUYOPUYO_ARRAY_2D_H
#define PUYOPUYO_ARRAY_2D_H

#include <set>
#include <vector>
#include "block.h"
#include "color_block.h"

using namespace std;

static const int W = 5;
static const int H = 12;

class array_2d {
private:
    static block * block_array[W][H];
    static bool can_visit[W][H];
    static set<color_block *> explosion_s;
    static int score;

public:
    array_2d();;
    bool can_make(int type);
    static void delete_block(int x, int y);
    static void insert(vector<block *> v);
    static void insert(int x, int y, block * b);
    static void check_visit(int x, int y, bool state);
    static bool visit_check(int x, int y);
    static block *get_block(int x, int y);
    static bool can_move(int x, int y);
    void print();
    void insert_explosion(color_block * group);
    void remove_explosion();
    bool can_explosion();
    bool explosion();
    int get_score();
    static vector<block *> gravity(vector<block *> v);

    static int count;
    static vector<block *> exp_s;
    static int DFS[W][H];
    static void post_process();
    static void dfs(int, int, int);
    static void kill_gray();
    static void is_gray_block(int, int);
};

#endif //PUYOPUYO_ARRAY_2D_H

