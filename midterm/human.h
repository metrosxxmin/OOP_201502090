//
// Created by Soomin Lee on 2019/11/13.
//

#ifndef SMART_PTR_HUMAN_H
#define SMART_PTR_HUMAN_H

#include <iostream>

class human {
protected:
    char * name;
public:
    human();
    explicit human(char* name);
    char * get_name();
    virtual int get_id();
};


#endif //SMART_PTR_HUMAN_H

