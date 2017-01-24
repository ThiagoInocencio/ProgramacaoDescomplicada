// 33º Exercício da lista de recursão

#include <stdio.h>

void invertOrdem(float *n, int ini, int fin) {

    float x;

    if(ini>fin) return;

    x = n[ini];
    n[ini] = n[fin];
    n[fin] = x;

    return invertOrdem(n, ++ini, --fin);

}

int main() {

    float arr[100];
    int i;

    for(i=0; i<100; i++)
        arr[i] = i+1;

    invertOrdem(arr, 0, 99);

    return 0;
}
