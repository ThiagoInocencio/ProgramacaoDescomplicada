// 8º Exercício da lista de funções

#include <stdio.h>
#include <math.h>

float hipotenusa(float a, float b) {

    return sqrt(pow(a,2) + pow(b, 2));

}

int main () {

    
    printf("A hipotenusa de um triangulo dados os catetos 4 e 3 eh: %0.2f" , hipotenusa(4, 3));

    return 0;

}
