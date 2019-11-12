//
// Created by sxxmin on 2019-11-06.
//

#ifndef VEHICLE_BIKE_H
#define VEHICLE_BIKE_H

#include "vehicle.h"

class bike : public vehicle {
private:
    char* bike_name;
    int bike_number;
public:
    bike();
    bike(int, int);
    bike(int, int, char*);
    bike(int, int, char*, int);
    bike(int, int, char*, int, bool);

    const char* get_class_name();

    void set_bike_name(char*);
    void set_bike_number(int);
    void set_wheel_number(int);
    void set_max_speed(int);
    void set_has_name(bool);

    char* get_bike_name();
    int get_bike_number();
    int get_wheel_number();
    int get_max_speed();
    bool get_has_name();
};

#endif //VEHICLE_BIKE_H

