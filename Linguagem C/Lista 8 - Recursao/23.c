// 23º Exercício da lista de recursão

#include <stdio.h>

int somaElementos(int *arr, int n) {

    if(n == 0) return arr[0];

    return arr[n] + somaElementos(arr, n-1);

}

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("A soma dos elementos do vetor eh: %d" , somaElementos(arr, 9));

    return 0;
}
