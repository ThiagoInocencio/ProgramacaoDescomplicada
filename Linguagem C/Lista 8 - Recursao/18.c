// 18º Exercício da lista de recursão

#include <stdio.h>

int fatorial(int n) {
    if(n == 0) return 1;
    return n * fatorial(n-1);
}

int superfatorial(int n) {

   int x;

   if(n <= 0) return 1;

   x = fatorial(n);

   return x * superfatorial(n-1);

}

int main() {

    printf("O superfatorial de 4: %d" , superfatorial(4));

    return 0;
}
