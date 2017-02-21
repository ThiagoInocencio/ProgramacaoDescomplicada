// 21º Exercício da lista de funções

#include <stdio.h>

int ehPrimo(int num) {

    int i, j;

    for(i = 2; i <= num; i++)
        if(num % i == 0) break;

    if(i == num) return 1;
      else return 0;

}

int qtdPrimo(int num) {

    int i, cont = 0;

    if(num == 2) return 1;

    for(i = 3; i < num; i += 2)
       if(ehPrimo(i)) cont++;

    return cont+1;


}

int main () {

    printf("A quantidade de numeros primos abaixo de 33 eh: %d\n" , qtdPrimo(115));

    return 0;

}
