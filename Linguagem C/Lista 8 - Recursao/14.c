// 14º Exercício da lista de recursão

#include <stdio.h>

void imprimeSerie(int i, int j, int k) {

   if (i > j) return;
   printf("%d " , i);
   return imprimeSerie(i+k, j, k);

}

int main() {

    printf("Serie de 1 a 10 com inclemento de 4: ");
    imprimeSerie(1, 10, 4);

    return 0;
}
