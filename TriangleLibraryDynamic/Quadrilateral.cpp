#include "Quadrilateral.h"

void Quadrilateral::print_angle() {
    Triangle::print_angle();
    std::cout << " D=" << _angle_d;
}

void Quadrilateral::print_side() {
    Triangle::print_side();
    std::cout << " d=" << _side_d;
}

Quadrilateral::Quadrilateral(std::string mame_, int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_) :Triangle(mame_, side_a_, side_b_, side_c_, angle_a_, angle_b_, angle_c_) {
    _side_d = side_d_;
    _angle_d = angle_b_;
}