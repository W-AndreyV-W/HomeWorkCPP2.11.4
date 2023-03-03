#pragma once
#ifdef TRIANGLELIBRARYDYNAMIC_EXPORTS
#define TRIANGLELIBRARYDYNAMIC_API __declspec(dllexport)
#else
#define TRIANGLELIBRARYDYNAMIC_API __declspec(dllimport)
#endif

#include "Rectrangle.h"

class Square :public Rectrangle {
public:
    TRIANGLELIBRARYDYNAMIC_API Square() :Square(" вадрат:", 20) {}
protected:
    Square(std::string mame_, int side_a_b_c_d_);
};