#pragma once
#include "Parallelogram.h"

class Rhombus :public Parallelogram {
public:
    TRIANGLELIBRARYDYNAMIC_API Rhombus() :Rhombus("????:", 30, 30, 40) {}
protected:
    Rhombus(std::string mame_, int side_a_b_c_d_, int angle_a_c_, int angle_b_d_);
};