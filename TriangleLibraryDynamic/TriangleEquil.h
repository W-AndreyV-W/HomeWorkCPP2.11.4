#pragma once
#include "Triangle.h"

class TriangleEquil :public Triangle {
public:
    TRIANGLELIBRARYDYNAMIC_API TriangleEquil() :TriangleEquil("�������������� �����������:", 30) {}
protected:
    TriangleEquil(std::string mame_, int side_a_b_c_);
};