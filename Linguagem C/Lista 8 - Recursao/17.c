// 17º Exercício da lista de recursão

#include <stdio.h>

int fatorial(int n) {
    if(n == 0) return 1;
    return n * fatorial(n-1);
}

int fatorialQuadruplo(int n) {

   return fatorial(2*n) / fatorial(n);

}

int main() {

    printf("O fatorial quaduplo de 5: %d" , fatorialQuadruplo(5));

    return 0;
}
