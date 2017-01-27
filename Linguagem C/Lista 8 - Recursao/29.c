// 29º Exercício da lista de recursão

#include <stdio.h>

int pell(int n) {

   if(n == 0 || n == 1) return n;
   return 2 * pell(n-1) + pell(n-2);

}

int main() {

    printf("O numero de Pell para n = 10 eh: %d" , pell(10));

    return 0;
}
