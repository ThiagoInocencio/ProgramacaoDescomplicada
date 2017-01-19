// 1º Exercício da lista de recursão

#include <stdio.h>

int somatorio(int N) {
  if(N==0) return 0;
  return N + somatorio(N-1);
}

int main() {
    printf("Somatorio: %d" , somatorio(2));
    return 0;
}
