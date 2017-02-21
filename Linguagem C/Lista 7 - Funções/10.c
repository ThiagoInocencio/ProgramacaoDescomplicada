// 10º Exercício da lista de funções

#include <stdio.h>

int maior(int a, int b) {

    if(a >= b) return a;
      else return b;

}

int main () {


    printf("O maior número entre 8 e 10 eh: %d" , maior(8, 10));

    return 0;

}
