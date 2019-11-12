//
// Created by sxxmin on 2019-11-06.
//

#include "bike.h"

bike::bike() {

}

bike::bike(int _wheel_number, int _max_speed) {
    this->wheel_number = _wheel_number;
    this->max_speed = _max_speed;
}

bike::bike(int _wheel_number, int _max_speed, char * _bike_name) {
    this->wheel_number = _wheel_number;
    this->max_speed = _max_speed;
    this->bike_name = _bike_name;
}

bike::bike(int _wheel_number, int _max_speed, char * _bike_name, int _bike_number) {
    this->wheel_number = _wheel_number;
    this->max_speed = _max_speed;
    this->bike_name = _bike_name;
    this->bike_number = _bike_number;
}

bike::bike(int _wheel_number, int _max_speed, char * _bike_name, int _bike_number, bool _has_name) {
    this->wheel_number = _wheel_number;
    this->max_speed = _max_speed;
    this->bike_name = _bike_name;
    this->bike_number = _bike_number;
    this->has_name = _has_name;

}

const char* bike::get_class_name() {
    return "bike";
}

void bike::set_bike_name(char * _bike_name) {
    this->bike_name = _bike_name;
}

void bike::set_bike_number(int _bike_number) {
    this->bike_number = _bike_number;
}

void bike::set_wheel_number(int _wheel_number) {
    vehicle::set_wheel_number(_wheel_number);
}

void bike::set_max_speed(int _max_speed) {
    vehicle::set_max_speed(_max_speed);
}

void bike::set_has_name(bool _has_name) {
    vehicle::set_has_name(_has_name);
}

int bike::get_bike_number() {
    return this->bike_number;
}

char* bike::get_bike_name() {
    return this->bike_name;
}

int bike::get_wheel_number() {
    return vehicle::get_wheel_number();
}

int bike::get_max_speed() {
    return vehicle::get_max_speed();
}

bool bike::get_has_name() {
    return vehicle::get_has_name();
}

