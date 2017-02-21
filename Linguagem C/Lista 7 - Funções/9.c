// 9º Exercício da lista de funções

#include <stdio.h>

float volumeCilindro(float raio, float altura) {

    return 3.14159 * (raio*raio) * altura;

}

int main () {

    
    printf("O volume de um cilindro circular com raio = 5 e altura igual 3 eh: %0.4f" , volumeCilindro(5, 3));

    return 0;

}
