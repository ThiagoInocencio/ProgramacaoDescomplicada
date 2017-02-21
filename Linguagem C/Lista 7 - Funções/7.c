// 7º Exercício da lista de funções

#include <stdio.h>

float toFahrenheit(float celsius) {

    return celsius * (9.0/5.0) + 32.0;

}

int main () {

    
    printf("5.0 graus Celsius em Fahrenheit: %.2f" , toFahrenheit(-54));

    return 0;

}
