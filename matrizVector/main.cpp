#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector< vector<int> > m(5, vector<int>(5,0));

    for(int i=0;i<m.size();i++){
        for(int j=0;j<m[i].size();j++){
            cout<< m[i][j] << " ";
        }
        cout<<endl;
    }

    vector< vector<int> >n;
    int nl,nc;
    cout<<"Insira o número de linhas e colunas:";
    cin>>nl>>nc;

    /* cria um objeto e passa para o n
     * o objeto é destruído após o fim da execução
     * usado quando não se sabe a quantidade de elementos
     */
    n= vector< vector<int> (nl,vector<int>(nc,0));

    o.resize(nl);
    for(int i=0;i<o.size();i++){
        o[i].resize(nc);
    }

    for(int i=0;i<m.size();i++){
        for(int j=0;j<m[i].size();j++){
            cout<< m[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}
