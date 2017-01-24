// 26º Exercício da lista de recursão

#include <stdio.h>

int padovan(n) {

    if(n == 0 || n == 1 || n == 2) return 1;

    return padovan(n-2) + padovan(n-3);

}

int main() {

    printf("o 12 termo da serie de padovan eh: %d" , padovan(12));

    return 0;
}
