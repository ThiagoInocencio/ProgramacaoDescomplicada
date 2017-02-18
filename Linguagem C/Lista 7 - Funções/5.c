// 5º Exercício da lista de funções

#include <stdio.h>

double raioEsfera (double raio) {

    return (4 * (3.14159) * (raio*raio*raio))/3;

}


int main () {


    printf("Um esfera com 5 de raio tem volume igual a: %lf" , raioEsfera(5));

    return 0;

}
