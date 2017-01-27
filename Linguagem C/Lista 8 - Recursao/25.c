// 25º Exercício da lista de recursão

#include <stdio.h>

int tetranacci(int n) {

   if(n == 0 || n == 1 || n == 2) return 0;
   if(n == 3) return 1;
   return tetranacci(n-1) + tetranacci(n-2) + tetranacci(n-3) + tetranacci(n-4);

}

int main() {

    printf("O decimo segundo termo da serie de tetranacci eh: %d" , tetranacci(12));

    return 0;
}
