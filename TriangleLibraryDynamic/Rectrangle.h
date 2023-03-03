#pragma once
#ifdef TRIANGLELIBRARYDYNAMIC_EXPORTS
#define TRIANGLELIBRARYDYNAMIC_API __declspec(dllexport)
#else
#define TRIANGLELIBRARYDYNAMIC_API __declspec(dllimport)
#endif

#include "Parallelogram.h"

class Rectrangle :public Parallelogram {
public:
    TRIANGLELIBRARYDYNAMIC_API Rectrangle() :Rectrangle("Прямоугольник:", 10, 20) {}
protected:
    Rectrangle(std::string mame_, int side_a_c_, int side_b_d_);
};