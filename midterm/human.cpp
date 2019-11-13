//
// Created by Soomin Lee on 2019/11/14.
//

#include "human.h"

human::human() {
    this->name = nullptr;
    // name 의 default 값을 nullptr로 지정
}

human::human(char* name) {
    this->name = name;
    // name 의 값을 지정
}

char *human::get_name() {
    // name 의 값을 반환하게 구현
    return this->name;
}

int human::get_id() {
    // TODO: Fill it
    return 0;
}

