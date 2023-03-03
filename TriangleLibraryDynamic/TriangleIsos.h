#pragma once
#ifdef TRIANGLELIBRARYDYNAMIC_EXPORTS
#define TRIANGLELIBRARYDYNAMIC_API __declspec(dllexport)
#else
#define TRIANGLELIBRARYDYNAMIC_API __declspec(dllimport)
#endif

#include "Triangle.h"

class TriangleIsos :public Triangle {
public:
    TRIANGLELIBRARYDYNAMIC_API TriangleIsos() :TriangleIsos("Равнобедренный треугольник:", 10, 20, 50, 60) {}
protected:
    TriangleIsos(std::string mame_, int side_a_c_, int side_b_, int angle_a_c_, int angle_b_);
};