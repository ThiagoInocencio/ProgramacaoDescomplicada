// 8º Exercício da lista de recursão

#include <stdio.h>

void naturalN(int N) {

   if(N == -1) return;

   printf("%d ", N);

   return naturalN(N-1);
}

int main() {
    // Números naturais de 8 a 0
    naturalN(8);
    return 0;
}
