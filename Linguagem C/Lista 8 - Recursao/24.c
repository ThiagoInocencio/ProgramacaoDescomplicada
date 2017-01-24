// 24º Exercício da lista de recursão

#include <stdio.h>

int tribonacci(n) {

    if(n == 0 || n == 1) return 0;
    if(n == 2) return 1;
    
    return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);

}

int main() 

    printf("o 5 termo da serie de tribonacci eh: %d" , tribonacci(5));

    return 0;
}
