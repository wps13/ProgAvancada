#include "reta.h"
#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief Reta::Reta
 * @param _x0
 * @param _y0
 * @param _x1
 * @param _y1
 */
Reta::Reta(int _x0, int _y0, int _x1, int _y1)
{
    x0=_x0;
    x1=_x1;
    y0=_y0;
    y1=_y1;
    if(abs(x1-x0) > abs(y1-y0))
        tam=abs(x1-x0);
    else
        tam = abs(y1-y0);
    deltaX =(x1-x0)/tam;
    deltaY = (y1-y0)/tam;
    m= deltaY/deltaX;
    e= m - (1/2);
    x = x + deltaX;
    y = y+deltaY;
}
void Reta::draw(Screen &t)
{    
    for(i=1;i<=deltaX;i++)
    {
        t.setPixel(round(x),round(y));
        while(e >= 0){
            y+=1;
            e-=1;
        }
        x+=1;
        e+=m;
    }
}

