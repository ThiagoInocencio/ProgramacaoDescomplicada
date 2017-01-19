// 9º Exercício da lista de recursão

#include <stdio.h>

void naturalParN(int N) {

   if(N > 0) naturalN(N-2);

   printf("%d ", N);

   return;
}

int main() {
    // Números naturais pares de 0 a 16
    naturalN(16);
    return 0;
}
