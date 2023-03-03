#include <iostream>
#include <locale.h>

#include"Figure.h"

void print_info(Triangle* triangle) {
    triangle->print_name();
    triangle->print_side();
    std::cout << std::endl;
    triangle->print_angle();
    std::cout << std::endl;
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Triangle triangle;
    TriangleRight triangleRight;
    TriangleIsos triangleIsos;
    TriangleEquil triangleEquil;
    Quadrilateral quadrilateral;
    Parallelogram parallelogram;
    Rhombus rhombus;
    Rectrangle rectrangle;
    Square square;

    Triangle* par_triangle = &triangle;
    Triangle* par_triangleRight = &triangleRight;
    Triangle* par_triangleIsos = &triangleIsos;
    Triangle* par_triangleEquil = &triangleEquil;
    Triangle* par_quadrilateral = &quadrilateral;
    Triangle* par_parallelogram = &parallelogram;
    Triangle* par_rhombus = &rhombus;
    Triangle* par_rectrangle = &rectrangle;
    Triangle* par_square = &square;

    print_info(par_triangle);
    print_info(par_triangleRight);
    print_info(par_triangleIsos);
    print_info(par_triangleEquil);
    print_info(par_quadrilateral);
    print_info(par_rectrangle);
    print_info(par_square);
    print_info(par_parallelogram);
    print_info(par_rhombus);
}