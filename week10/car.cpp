//
// Created by sxxmin on 2019-11-06.
//

#include "car.h"

car::car(){

}

car::car(int _wheel_number, int _max_speed) {
    this->wheel_number = _wheel_number;
    this->max_speed = _max_speed;
}

car::car(int _wheel_number, int _max_speed, char *_car_name) {
    this->wheel_number = _wheel_number;
    this->max_speed = _max_speed;
    this->has_name = _car_name;
}

car::car(int _wheel_number, int _max_speed, char *_car_name, bool _has_name) {
    this->wheel_number = _wheel_number;
    this->max_speed = _max_speed;
    this->car_name = _car_name;
    this->has_name = _has_name;
}

const char* car::get_class_name() {
    return "car";
}

void car::set_car_name(char * _car_name) {
    this->car_name = _car_name;
}

void car::set_wheel_number(int _wheel_number) {
    vehicle::wheel_number = _wheel_number;
}

void car::set_max_speed(int _max_speed) {
    vehicle::max_speed = _max_speed;
}

void car::set_has_name(bool _has_name) {
    vehicle::has_name = _has_name;
}

char* car::get_car_name() {
    return this->car_name;
}

int car::get_wheel_number() {
    return vehicle::get_wheel_number();
}

int car::get_max_speed() {
    return vehicle::get_max_speed();
}

bool car::get_has_name() {
    return vehicle::get_has_name();
}







