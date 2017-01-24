// 12º Exercício da lista de recursão

#include <stdio.h>

int menorElemento(int *arr, int n) {

    int x;

    if(n == 0) return arr[n];

    x = menorElemento(arr, n-1);

    if(x < arr[n]) return x;
     else return arr[n];

}

int main() {

    int arr[10] = {4, 5, 8, 65, 0, 21, 65, 7, -54, 2};

    printf("O menor elemento do array eh: %d" , menorElemento(arr, 9));

    return 0;
}
