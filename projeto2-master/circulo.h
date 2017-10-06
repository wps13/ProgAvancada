#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"
#include "Screen.h"

class Circulo : public FiguraGeometrica
{
public:
    Circulo();
    void draw(Screen &t);
};

#endif // CIRCULO_H
