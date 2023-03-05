#pragma once
#include "Triangle.h"

class TriangleRight :public Triangle {
public:
    TRIANGLELIBRARYDYNAMIC_API TriangleRight() :TriangleRight("Прямоугольный треугольник:", 10, 20, 30, 30, 60) {}
protected:
    TriangleRight(std::string mame_, int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_);
};