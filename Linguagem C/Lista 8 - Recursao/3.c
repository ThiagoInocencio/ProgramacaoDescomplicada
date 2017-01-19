// 3º Exercício da lista de recursão

#include <stdio.h>

int somaCubos(int n) {
  if(n == 0) return 0;
  return (n*n*n) + somaCubos(n-1);
}

int main() {
    printf("Soma dos n primeiros cubos de 1 a 7: %d" , somaCubos(7));
    return 0;
}
