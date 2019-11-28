#include <iostream>
#include "array_2d.h"

using namespace std;

array_2d * board = new array_2d();

void print_sorce() {
    cout << "score : " << board->get_score() << '\n';
}

void print_map() {
    board->print();
}

bool i_can_create_new_block() {
    return false;
}

void call_loop() {

    while(1) {
        if (i_can_create_new_block()) break;

        print_sorce();
        print_map();

    }
}

int main() {

    // for testing func.
    {
        print_map();
    }
    return 0;
}
