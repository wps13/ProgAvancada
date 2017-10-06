#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.h"
#include "Screen.h"
class Retangulo : public FiguraGeometrica
{
public:
    Retangulo();
    void draw(Screen &t);
};

#endif // RETANGULO_H
