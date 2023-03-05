#pragma once
#include "Parallelogram.h"

class Rectrangle :public Parallelogram {
public:
    TRIANGLELIBRARYDYNAMIC_API Rectrangle() :Rectrangle("Прямоугольник:", 10, 20) {}
protected:
    Rectrangle(std::string mame_, int side_a_c_, int side_b_d_);
};