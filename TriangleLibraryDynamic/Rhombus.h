#pragma once
#ifdef TRIANGLELIBRARYDYNAMIC_EXPORTS
#define TRIANGLELIBRARYDYNAMIC_API __declspec(dllexport)
#else
#define TRIANGLELIBRARYDYNAMIC_API __declspec(dllimport)
#endif

#include "Parallelogram.h"

class Rhombus :public Parallelogram {
public:
    TRIANGLELIBRARYDYNAMIC_API Rhombus() :Rhombus("Ромб:", 30, 30, 40) {}
protected:
    Rhombus(std::string mame_, int side_a_b_c_d_, int angle_a_c_, int angle_b_d_);
};