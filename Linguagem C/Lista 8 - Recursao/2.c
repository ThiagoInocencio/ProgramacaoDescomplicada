// 2º Exercício da lista de recursão

#include <stdio.h>

int fatorial(int N) {
  if(N == 0) return 1;
  return N * fatorial(N-1);
}

int main() {
    printf("Fatorial de 5: %d" , fatorial(5));
    return 0;
}
