// 19º Exercício da lista de funções

#include <stdio.h>

int ehPrimo(int num) {

    int i, j;

    for(i = 2; i <= num; i++)
        if(num % i == 0) break;

    if(i == num) return 1;
      else return 0;

}

int maiorFator(int num) {

    int i;

    for(i = num; i > 1; i--) {
        if(num % i == 0 && ehPrimo(i)) break;
    }

    if(i == 1) return num;
      else return i;


}

int main () {

    printf("O maior fator primo de 74463226 eh: %d\n" , maiorFator(74463226));

    return 0;

}
