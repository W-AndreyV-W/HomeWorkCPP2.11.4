#pragma once
#include "Quadrilateral.h"

class Parallelogram :public Quadrilateral {
public:
    TRIANGLELIBRARYDYNAMIC_API Parallelogram() :Parallelogram("??????????????:", 20, 30, 30, 40) {}
protected:
    Parallelogram(std::string mame_, int side_a_c_, int side_b_d_, int angle_a_c_, int angle_b_d_);
};