// 35º Exercício da lista de recursão

#include <stdio.h>

int contNum(int num, int k, int cont) {

    if(num < 1) return cont;

    if(num%10 == k) cont++;

    return contNum(num/10, k, cont);
}

int main() {

    printf("O digito 2 ocorre %d vezes no numero %d", contNum(762021192, 2, 0),  762021192);

    return 0;
}
