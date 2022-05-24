#pragma once
#include "Shape.hpp"
class Polygon:public Shape
{
    private:
    int NumeroDeLados;
    public:
    Polygon();
    Polygon(int,int,int);
}