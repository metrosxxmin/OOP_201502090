//
// Created by Soomin Lee on 2019-11-25.
//

#include "String.h"

String::String(const std::string &str) {
    this->_val = str;
}

std::string String::val() {
    return _val;
}

void String::set_val(const std::string& str) {

}

json_object * String::parse(const char * ch, int length, char base) {

}

json_object::_type String::type() {
    return STRING;
}

std::string String::to_string() {

}

