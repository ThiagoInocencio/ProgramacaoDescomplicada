// 16º Exercício da lista de funções

#include <stdio.h>

void desenhaLinha(int qtd) {

    int i;

    for(i = 0; i < qtd; i++)
      printf("=");

}

int main () {


    desenhaLinha(10);

    return 0;

}
