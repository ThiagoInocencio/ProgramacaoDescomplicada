// 19º Exercício da lista de recursão

#include <stdio.h>

int potencia(int k, int n) {

  if(n == 0) return 1;

  return k * potencia(k,n-1);

}

int hiperfatorial(int n) {

    if(n == 1) return potencia(n, n);

    return potencia(n, n) * hiperfatorial(n-1);
}

int main() {

    printf("O hiperfatorial de 4 eh: %d" , hiperfatorial(4));

    return 0;
}
