// 6º Exercício da lista de funções

#include <stdio.h>

int paraSegundos (int horas, int minutos, int segundos) {

    return (horas*60*60) + (minutos*60) + segundos;

}


int main () {


    printf("2 horas 45 minutos e 45 segundos em segundos: %d segundos" , paraSegundos(2, 45, 45));

    return 0;

}
