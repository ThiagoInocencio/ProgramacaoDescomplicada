// 21º Exercício da lista de recursão

#include <stdio.h>

int sequencia(int n) {

    if(n == 1 || n == 2 || n == 0) return n;

    return 2 * sequencia(n-1) + 3 * sequencia(n-2);

}

int main() {

    printf("o valor da sequencia para n = 5 eh: %d" , sequencia(5));

    return 0;
}