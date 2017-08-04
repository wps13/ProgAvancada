//exemplos de funções com ponteiros
#include <stdio.h>

//função que troca os valores de duas variavéis
void troca(int *a,int *b){ //troca o contéudo da variável na memória
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//função que ordena três números recebidos em ordem crescente
void ordena(int *a,int *b, int *c){

// troca o valor de a e b,caso o contéudo de a seja maior que o de b
    if(*a > *b){
        troca(a,b);
    }
// troca o valor de a e c,caso o contéudo de a seja maior que o de c
    if(*a > *c){
        troca(a,c);
    }
// troca o valor de b e c,caso o contéudo de b seja maior que o de c
    if(*b > *c){
        troca(b,c);
    }
}

int main(void)
{
  int a=3,b=4,c=2; //valores quaisquer usados para exemplo
  ordena(&a,&b,&c); //envia os endereços das variáveis
  printf("Valores: a= %d ,b= %d , c =%d\n ", a,b, c);
  //imprime os valores após alteradas pela função ordena

  return 0;
}
