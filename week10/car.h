//
// Created by sxxmin on 2019-11-06.
//

#ifndef VEHICLE_CAR_H
#define VEHICLE_CAR_H


#include "vehicle.h"

class car : public vehicle {
private:
    char* car_name;
public:
    car();
    car(int, int);
    car(int, int, char*);
    car(int, int, char*, bool);

    const char* get_class_name();

    void set_car_name(char*);
    void set_wheel_number(int);
    void set_max_speed(int);
    void set_has_name(bool);

    char* get_car_name();
    int get_wheel_number();
    int get_max_speed();
    bool get_has_name();
};

#endif //VEHICLE_CAR_H
