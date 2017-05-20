// 2º Exercício da lista de vetores e matrizes

#include <stdio.h>

int main() {

  int A[6];
  int i;

  for(i = 0; i < 6; i++)
    scanf("%d" , &A[i]);

  for(i = 0; i < 6; i++)
    printf("%d " , A[i]);

  return 0;
}