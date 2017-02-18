// 3º Exercício da lista de funções

#include <stdio.h>

int funcPositivo(int num) {

    if (num > 0) return 1;
     else if(num == 0) return 0;
       else return -1;

}

int main () {

    printf("para num = -4 a funcao funcPositivo retorna: %d", funcPositivo(-4));
    printf("\npara num = 0 a funcao funcPositivo retorna: %d", funcPositivo(0));
    printf("\npara num = 1 a funcao funcPositivo retorna: %d", funcPositivo(1));

    return 0;

}
