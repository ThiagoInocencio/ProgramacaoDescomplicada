// 15º Exercício da lista de recursão

#include <stdio.h>

float serieS(float n) {

   if (n == 0) return 0;
   return ((n*n+1)/n) + serieS(n - 1);

}

int main() {

    printf("O valor da serie S para n = 4 e: %f" , serieS(1));

    return 0;
}
