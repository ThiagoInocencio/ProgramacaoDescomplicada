// 5º Exercício da lista de recursão

#include <stdio.h>

int fibonacci(int N) {
  if(N == 0) return 0;
  else if(N == 1 || N == 2) return 1;
  return fibonacci(N-1) + fibonacci(N-2);
}

int main() {
    printf("O oitavo termo da sequencia de fibonacci: %d" , fibonacci(8));
    return 0;
}
