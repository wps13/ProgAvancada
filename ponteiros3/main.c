#include <stdio.h>
#include <stdlib.h>

void printchar(unsigned char x){
    unsigned char count;
    for(count=0;count<8;count++){
        printf(" %d ", (x & 0x80)/128);
         x=x<<1;
    }

    /*
     * (x & 0x80) só mostra os números quando o de cima for maior que o de baixo
     *  divide por 128 para mostrar valores entre 0 ou 1
     *  x=x<<1 faz o descolamentos dos bits a esquerda
     *  printf(" %d ", !!(x & 0x80)) : dessa forma ele imprime e binário,
     * testando se é verdadeiro ou falso, senão seria impresso 128 ou 0
     */
}

void printint(int x){
    unsigned char *pu;
    pu=(unsigned char *) &x; //conversão de tipo
    int i;
    for(i=0;i<4;i++){
    printf(" \n byte %d :%d  --- ",i, *pu );
    printchar(*pu);
    pu++;
    }

}

int main(void)
{
   int x;

   x=3;
   printf("x =%d\n", x);
   printint(x);
   printf("\n");

    return 0;
}

