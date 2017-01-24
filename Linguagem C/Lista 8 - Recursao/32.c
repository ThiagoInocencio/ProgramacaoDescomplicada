// 32º Exercício da lista de recursão

#include <stdio.h>

void binario(int n) {

    if(n > 1) binario (n/2);

    if(n % 2 != 0) printf(" 1 ");
      else printf(" 0 ");

    return;

}

int main() {

    binario(233);
    
    return 0;
}
