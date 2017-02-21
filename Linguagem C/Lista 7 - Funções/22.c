// 22º Exercício da lista de funções

#include <stdio.h>

void imprimeLinhas(int qtd) {

    int i, j;

    for(i = 1; i <= qtd; i++) {
      for(j = i; j > 0 ; j--)
        printf("!")
      printf("\n");
    }

}

int main () {

    printf("para n = 10: \n");
    imprimeLinhas(10);

    return 0;

}
