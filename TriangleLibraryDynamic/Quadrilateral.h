#pragma once
#include "Triangle.h"

class Quadrilateral :public Triangle {
public:
    TRIANGLELIBRARYDYNAMIC_API void print_angle() override;
    TRIANGLELIBRARYDYNAMIC_API void print_side() override;
    TRIANGLELIBRARYDYNAMIC_API Quadrilateral() :Quadrilateral("Четырехугольник:", 10, 20, 30, 40, 50, 60, 70, 80) {}
protected:
    Quadrilateral(std::string mame_, int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_);
private:
    int _side_d = 0;
    int _angle_d = 0;
};