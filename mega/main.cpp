#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int> v(60);
    vector<int> sorteio(6);

    /* Cria uma matriz de vetores
     * Se for compilar na linha de comando incluir "-std=c++11"
     * Para que não ocorra erro de compilação
     */
    vector< vector<int>> sorteios;

    /*cria um fluxo de saída
     * separa um elemento do outro
     */
    ostream_iterator<int> out_it (std::cout,", ");

    srand(time(0));

    /* Incrementa as posições começando do valor 1
     * Criando as posições para o objeto na memória
     */
    iota(v.begin(),v.end(),1);

    /* Cria a cópia de elementos à partir da posição dado por out_it
     * funciona como um 'for'
     * construção : (começoArray,FimArray,PosiçãoInicio)
     * A função assume que a variável tenha um tamanho adequado para armazenar
     */
    copy(v.begin(),v.end(),out_it);

    cout<<"\n\n";

    /* Gera valores aleatórios, que tem sua inicialização na linha 19
     * cada valor é gerado com base na hora
     * Para gerar vários sorteios, basta criar um for no restante do código
     */
    for(int i=0;i<20;i++){
    random_shuffle(v.begin(),v.end());

    //copy(v.begin(),v.end(),out_it);

    copy(v.begin(),v.begin()+6,sorteio.begin());

    //cout<<"\n\nSorteio= ";

    //copy(sorteio.begin(),sorteio.end(),out_it);

    //Faz com que sejam criadas mais posições para a matriz
    sorteios.push_back(sorteio);
    }

    //exibe os vetores da matriz
    for(int i=0;i<sorteios.size();i++){
        cout<<"\nSorteio= ";
        copy(sorteios[i].begin(),sorteios[i].end(),out_it);
    }
    return 0;
}
