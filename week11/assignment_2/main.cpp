//
// Created by Soomin Lee on 2019/11/19.
//

#include "Integer.h"
#include "Float.h"
#include "Complex.h"
#include <iostream>

int main() {

    {
        Number *a = new Integer(13);
        Number *result = a->add(new Float(3.14));

        std::cout << dynamic_cast<Float *>(result)->val() << std::endl; // 16.14
    }
    {
        Number *a = new Integer(3);
        Number *result = a
                ->add(new Float(3.14))
                ->sub(new Integer(1))
                ->mul(new Integer(7))
                ->sub(new Complex(11, 5));

        std::cout << dynamic_cast<Complex *>(result)->to_string() << std::endl; // 24.980000 - 5.000000i
    }

    return 0;
}

