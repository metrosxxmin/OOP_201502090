//
// Created by Soomin Lee on 2019-11-25.
//

#include "Integer.h"

Integer::Integer(int value) {
    this->_val = value;
}

int Integer::val() {
    return this->_val;
}

void Integer::set_val(const int &value) {
    this->_val = value;
}

json_object * Integer::parse(const char * ch, int length) {

}

json_object::_type Integer::type() {
    return INT;
}

std::string Integer::to_string() {

}


