// 11º Exercício da lista de recursão

#include <stdio.h>

void imprimeArray(int *arr, int n) {

    if(n == 0) return;
    prinf("%d " , arr[n]);
    return imprimeArray(arr, n-1);

}

int main() {

    int arr[10] = {4, 5, 8, 65, 333, 21, 65, 7, 54, 2};

    imprimeArray(9);

    return 0;
}