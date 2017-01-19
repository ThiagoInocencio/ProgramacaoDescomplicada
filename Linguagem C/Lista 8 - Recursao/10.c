// 10º Exercício da lista de recursão

#include <stdio.h>

void naturalN(int N) {

   if(N < 0) return;

   printf("%d ", N);

   return naturalN(N-2);
}

int main() {
    // Números naturais de 16 a 0
    naturalN(16);
    return 0;
}
