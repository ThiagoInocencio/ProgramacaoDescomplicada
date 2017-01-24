// 27º Exercício da lista de recursão

#include <stdio.h>

int funcaoH(int m, int n) {

    if(n == 1) return m+1;
    if(m == 1) return n+1;
    return funcaoH(m, n-1) + funcaoH(m-1, n);

}

int main() {

    printf("Valor retornado pela funcao H quando m=5 e n=8 eh: %d " , funcaoH(5, 8));

    return 0;
}
