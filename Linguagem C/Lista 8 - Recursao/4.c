// 4º Exercício da lista de recursão

#include <stdio.h>

int potencia(int k, int n) {
  if(n == 0) return 1;
  return k * pow(k,n-1);
}

int main() {
    printf("2 elevado a 5: %d" , potencia(2,5));
    return 0;
}
