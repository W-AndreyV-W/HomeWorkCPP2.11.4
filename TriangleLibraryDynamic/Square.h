#pragma once
#include "Rectrangle.h"

class Square :public Rectrangle {
public:
    TRIANGLELIBRARYDYNAMIC_API Square() :Square(" вадрат:", 20) {}
protected:
    Square(std::string mame_, int side_a_b_c_d_);
};