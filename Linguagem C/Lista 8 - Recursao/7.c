// 7º Exercício da lista de recursão

#include <stdio.h>

void naturalN(int N) {

   if(N > 0) naturalN(N-1);

   printf("%d ", N);

   return;
}

int main() {
    // Números naturais de 0 a 8
    naturalN(8);
    return 0;
}
