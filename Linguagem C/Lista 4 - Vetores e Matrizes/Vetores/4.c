// 4º Exercício da lista de Vetores e Matrizes

#include <stdio.h>

int main()
{
    int vetor[8];
    int X, Y, i;

    for(i = 0; i < 8; i++) {
        printf("vetor[%d]: " , i);
        scanf("%d" , &vetor[i]);
    }

    // 0 <= X < 8
    printf("X: ");
    scanf("%d" , &X);

    // 0 <= Y < 8
    printf("Y: ");
    scanf("%d" , &Y);

    printf("Soma: %d" , (vetor[X] + vetor[Y]));

    return 0;
}