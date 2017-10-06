#include "strngbad.h"
#include <cstring>
#include <iostream>

using namespace std;

//inicializa membro da classe estática, garantindo que isso seja feito uma única vez
int StringBad::num_strings =0;

/* Construtor que recebe uma string dada na criação do objeto
 * calcula seu tamanho, inicia a matriz str com o tamanho da dada
 * e copia a dada para str, exibindo resultado em seguida
 * É necessário pq o char não têm tamanho alocado na memória
 * Soma-se 1 pq strlen não contabiliza o null da string
 * A função strcpy é usada pq a string armazena apenas o endereço,
 * sendo assim possível realizar a cópia com operador de igualdade
 * por conta do objeto que é armazenado separado do contéudo
 */
StringBad::StringBad(const char *s)
{
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    num_strings++;
    cout<<num_strings <<": \"" << str <<"\" object created\n";
}
//Construtor padrão da classe
StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    std::strcpy(str,"C++");
    num_strings++;
    cout<< num_strings <<": \"" << str << "\" default object created\n";
}

StringBad::~StringBad()
{
    cout << "\"" << str << "\" object, ";
    --num_strings;
    cout << num_strings << " left\n";
    delete [] str;
}

std::ostream &StringBad::operator<<(std::ostream &os, const StringBad &st)
{
    os << st.str;
    return os;
}
