#include <iostream>

using namespace std;

class Vetor{

private:
   /* Protege o estado da classe
    * para que nenhum usuário fora da classe
    * altere os valores de x e y
    */
   int x,y; //posições do vetor a partir da origem

public:
   void setX(float mx){
       x=mx;
   }
   float getX(void){ //ler o valor de x e o retorna
       return x;
   }
   void setY(float _y){
       y = _y;
   }
   float getY(void){
        return y;
    }
};


int main()//usa a classe Vetor
{
    Vetor v1;
    /* Cria um objeto da classe
     */
    v1.setX(3);
    /*chamada da função,
     * entra na função e fica guardado em mx
     * Pode ser passado qualquer valor, mas será
     * a função que definirá se ele será armazenado
     * */
    v1.setY(7);
    cout <<"v1 - x = "<<v1.getX() << endl;
    cout <<"v1 - y = "<<v1.getY() << endl;
    return 0;

}
