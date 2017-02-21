// 13º Exercício da lista de funções

#include <stdio.h>

int contAlgarismo(int num, int cont) {

    if(num < 1) return cont;

    cont += num%10;

    return contAlgarismo(num/10, cont);
}

int main () {


    printf("O soma dos algarismos de 45363 eh: %d" , contAlgarismo(45363, 0));

    return 0;

}
