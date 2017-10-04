#include <iostream>
#include <FiguraGeometrica.h>
#include <Circulo.h>
#include <Retangulo.h>
#include <Reta.h>
#include <vector>
using namespace std;

int main()
{
    vector<FiguraGeometrica*> figuras;
   FiguraGeometrica  *pfig;
   Circulo circ;
   Retangulo ret;
   Reta re;
  // fig.draw();
   circ.draw();
   pfig = &circ;

   /*é permitido que o ponteiro da classe base
    * aponte para um objeto da classe derivada,
    * mas não é permitido o contrário
    */

   pfig->draw();

   pfig = &ret;
   pfig->draw();

   pfig = &re;
   pfig ->draw();

   /**
     A criação do método draw possibilita que sejam criados objetos das
     classes derivadas, devido ao conceito de classe abstrata
     Caso não seja criada, ela ainda é concreta e não compila
     **/



    return 0;
}
