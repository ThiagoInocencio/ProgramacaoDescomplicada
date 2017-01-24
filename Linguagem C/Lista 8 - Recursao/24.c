// 24º Exercício da lista de recursão

#include <stdio.h>

int tribonacci(n) {

    if(n == 0 || n == 1) return 0;
    if(n == 2) return 1;
    
    return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);

}

int main() {

    int arr[10] = {4, 5, 8, 65, 333, 21, 65, 7, 54, 2};

    printf("o 5 termo da serie de tribonacci eh: " , tribonacci(5));

    return 0;
}