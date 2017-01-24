// 28º Exercício da lista de recursão

#include <stdio.h>

int ackerman(int m, int n) {

    if(m == 0) return n+1;
    if(m > 0 && n == 0) return ackerman(m-1, 1);

    return ackerman(m-1, ackerman(m,n-1));

}

int main() {

    printf("Valor retornado pela funcao de ackerman quando m=2 e n=6 eh: %d" , ackerman(2, 6));

    return 0;
}
