#pragma once
#ifdef TRIANGLELIBRARYDYNAMIC_EXPORTS
#define TRIANGLELIBRARYDYNAMIC_API __declspec(dllexport)
#else
#define TRIANGLELIBRARYDYNAMIC_API __declspec(dllimport)
#endif

#include <iostream>

class Triangle {
public:
    TRIANGLELIBRARYDYNAMIC_API virtual void print_angle();
    TRIANGLELIBRARYDYNAMIC_API virtual void print_name();
    TRIANGLELIBRARYDYNAMIC_API virtual void print_side();
    TRIANGLELIBRARYDYNAMIC_API Triangle() :Triangle("Треугольник:", 30, 20, 40, 30, 90, 60) {}
protected:
     Triangle(std::string mame_, int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_);
private:
    int _side_a = 0;
    int _side_b = 0;
    int _side_c = 0;
    int _angle_a = 0;
    int _angle_b = 0;
    int _angle_c = 0;
    std::string _name;
};