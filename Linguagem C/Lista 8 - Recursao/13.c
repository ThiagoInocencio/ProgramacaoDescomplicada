// 13º Exercício da lista de recursão

#include <stdio.h>

int somaSerie(int i, int j, int k) {

   if (i > j) return 0;
   return i + somaSerie(i+k, j, k);

}

int main() {

    printf("A soma dos valores de 1 a 8 com inclemento de 3: %d" , somaSerie(1, 8, 3));

    return 0;
}
