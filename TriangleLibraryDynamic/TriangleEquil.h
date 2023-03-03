#pragma once
#ifdef TRIANGLELIBRARYDYNAMIC_EXPORTS
#define TRIANGLELIBRARYDYNAMIC_API __declspec(dllexport)
#else
#define TRIANGLELIBRARYDYNAMIC_API __declspec(dllimport)
#endif

#include "Triangle.h"

class TriangleEquil :public Triangle {
public:
    TRIANGLELIBRARYDYNAMIC_API TriangleEquil() :TriangleEquil("Равносторонний треугольник:", 30) {}
protected:
    TriangleEquil(std::string mame_, int side_a_b_c_);
};