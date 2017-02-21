// 20º Exercício da lista de funções

#include <stdio.h>

int fatorial(int x) {

   int fat = 1;

   while(x > 0) {
     fat *= x;
     x--;
   }

  return fat;

}

int main () {


    printf("Fatorial de 6 eh: %d\n" , fatorial(6));

    return 0;

}
