// 4º Exercício da lista de funções

#include <stdio.h>
#include <math.h>

void quadradoPerfeito(double num) {

    if(sqrt(num) == trunc(sqrt(num)))
        printf("%0.0lf \n" , num);

}

int main () {

    int i;

    for(i = 0; i < 1000; i++)
        quadradoPerfeito((double) i);

    return 0;

}
