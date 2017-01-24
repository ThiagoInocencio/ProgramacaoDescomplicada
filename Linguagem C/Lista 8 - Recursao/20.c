// 20º Exercício da lista de recursão

#include <stdio.h>

int potencia(int k, int n) {

  if(n == 0) return 1;

  return k * potencia(k,n-1);

}

int fatorialExponencial(int n) {

    if(n <= 1) return potencia(1, 0);

    return potencia(n, fatorialExponencial(n-1));

}

int main() {

    printf("O fatorialExponencial de 4 eh: %d" , fatorialExponencial(4));

    return 0;
}
