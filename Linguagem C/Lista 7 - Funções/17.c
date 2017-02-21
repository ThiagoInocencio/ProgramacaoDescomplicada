// 17º Exercício da lista de funções

#include <stdio.h>

int somaN(int n1, int n2) {

    int soma = 0, i, aux;

    if(n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for(i = n1+1; i < n2; i++)
       soma += i;

    return soma;

}

int main () {


    printf("A soma dos numero entre 10 e 5 eh: %d\n" , somaN(5,10));

    return 0;

}
