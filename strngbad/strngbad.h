#ifndef STRNGBAD_H
#define STRNGBAD_H
#include <ostream>

using namespace std;

class StringBad
{
private:
    //cria váriavel do tipo char sem tamanho previamente alocado
    char * str;
    //len vai ser usado para alocar matriz depois,mostrando tamanho
    int len;
    //conta as matrizes mas cria apenas 1 objeto independente do tamanho
    static int num_strings;
public:
    StringBad(const char * s);
    StringBad();
    ~StringBad();
    friend ostream & operator<<(ostream & os, const StringBad & st);
};

#endif // STRNGBAD_H
