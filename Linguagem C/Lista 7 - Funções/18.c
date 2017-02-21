// 18º Exercício da lista de funções

#include <stdio.h>

float pow(float X, float Z) {

    float resultado = 1.0;
    int negativo = 0;

    if(Z < 0) {
        Z *= -1;
        negativo = 1;
    }

    while(Z--) {
        resultado *= X;
    }

    if(negativo) resultado = 1/resultado;

    return resultado;

}

int main () {


    printf("5 elevado na 4 eh: %0.2f\n" , pow(5.0, 4.0));

    return 0;

}
