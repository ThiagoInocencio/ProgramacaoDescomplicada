// 6º Exercício da lista de recursão

#include <stdio.h>

int  multipRec(int n1, int n2) {
  if(n2 == 0) return 0;
  return n1 + multipRec(n1, n2-1);
}

int main() {
    printf("5 x 10: %d" , multipRec(5,7));
    return 0;
}
